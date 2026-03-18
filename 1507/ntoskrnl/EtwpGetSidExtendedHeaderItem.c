/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x140438A58
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rax
  int v4; // esi
  PACCESS_TOKEN v5; // rbx
  unsigned int v6; // eax
  size_t v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  char v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+34h] [rbp-84h] BYREF
  unsigned int Size; // [rsp+38h] [rbp-80h]
  int Size_4; // [rsp+3Ch] [rbp-7Ch] BYREF
  _BYTE Src[80]; // [rsp+40h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (void *)PsReferenceEffectiveToken(
                 (_DWORD)CurrentThread,
                 (unsigned int)&Size_4,
                 (unsigned int)&v11,
                 (unsigned int)&v12,
                 0LL);
  v4 = Size_4;
  v5 = v3;
  if ( Size_4 == 2 && v12 < 2 )
  {
    if ( v3 )
      ObfDereferenceObject(v3);
    v5 = PsReferencePrimaryToken(CurrentThread->Process);
    v4 = 1;
  }
  SeQueryUserSidToken(v5, Src, 68LL);
  if ( v4 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&CurrentThread->Process[1].Affinity.Bitmap[5], (unsigned __int64)v5);
  }
  else if ( v5 )
  {
    ObfDereferenceObject(v5);
  }
  v6 = Size;
  v7 = Size;
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v6;
  v8 = v6 + 8;
  v9 = (v6 + 15) & 0xFFFFFFF8;
  *(_WORD *)a1 = (v6 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), Src, v7);
  return memset((void *)(a1 + v8), 0, v9 - v8);
}
