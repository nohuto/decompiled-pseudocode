/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x1403FE9D4
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
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
  int v13; // [rsp+38h] [rbp-80h] BYREF
  unsigned int Size; // [rsp+3Ch] [rbp-7Ch]
  _BYTE Size_4[80]; // [rsp+40h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (void *)PsReferenceEffectiveToken(
                 (_DWORD)CurrentThread,
                 (unsigned int)&v12,
                 (unsigned int)&v11,
                 (unsigned int)&v13,
                 0LL);
  v4 = v12;
  v5 = v3;
  if ( v12 == 2 && v13 < 2 )
  {
    if ( v3 )
      ObfDereferenceObject(v3);
    v5 = PsReferencePrimaryToken(CurrentThread->Process);
    v4 = 1;
  }
  SeQueryUserSidToken(v5, Size_4, 68LL);
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
  memmove((void *)(a1 + 8), Size_4, v7);
  return memset((void *)(a1 + v8), 0, v9 - v8);
}
