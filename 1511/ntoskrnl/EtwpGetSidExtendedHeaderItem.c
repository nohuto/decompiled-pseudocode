/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x1404795EC
 * Callers:
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rax
  int v4; // esi
  PACCESS_TOKEN v5; // rbx
  ULONG v6; // ecx
  bool v8; // [rsp+30h] [rbp-88h] BYREF
  int v9; // [rsp+34h] [rbp-84h] BYREF
  ULONG Size; // [rsp+38h] [rbp-80h] BYREF
  int Size_4; // [rsp+3Ch] [rbp-7Ch] BYREF
  _BYTE Src[80]; // [rsp+40h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = PsReferenceEffectiveToken((__int64)CurrentThread, &Size_4, &v8, &v9, 0LL);
  v4 = Size_4;
  v5 = v3;
  if ( Size_4 == 2 && v9 < 2 )
  {
    if ( v3 )
      ObfDereferenceObject(v3);
    v5 = PsReferencePrimaryToken(CurrentThread->Process);
    v4 = 1;
  }
  SeQueryUserSidToken((__int64)v5, Src, 0x44u, &Size);
  if ( v4 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&CurrentThread->Process[1].Affinity.Bitmap[5], (unsigned __int64)v5);
  }
  else if ( v5 )
  {
    ObfDereferenceObject(v5);
  }
  v6 = Size;
  *(_WORD *)(a1 + 6) = Size;
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)a1 = (v6 + 15) & 0xFFF8;
  return memmove((void *)(a1 + 8), Src, v6);
}
