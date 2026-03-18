/*
 * XREFs of MmCreateTeb @ 0x1403F22E4
 * Callers:
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreateTeb(_KPROCESS *a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 *v11; // rax
  int PebOrTeb; // esi
  __int64 v13; // rdi
  _QWORD v16[2]; // [rsp+28h] [rbp-70h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v17; // [rsp+38h] [rbp-60h] BYREF

  v16[1] = a5;
  v8 = 0LL;
  v9 = 1;
  v10 = 0LL;
  v11 = (__int64 *)a1[1].ActiveProcessors.Bitmap[7];
  if ( v11 )
    v10 = *v11;
  if ( v10 )
    v9 = 2;
  KiStackAttachProcess(a1, 0LL, (__int64)&v17);
  PebOrTeb = MiCreatePebOrTeb(v9, a4, v16);
  if ( PebOrTeb < 0 )
  {
    KiUnstackDetachProcess(&v17, 0LL);
  }
  else
  {
    v13 = v16[0];
    *(_DWORD *)(v16[0] + 32LL) = 7680;
    *(_DWORD *)(v13 + 744) = 65534;
    *(_WORD *)(v13 + 4698) = 522;
    *(_QWORD *)(v13 + 4704) = v13 + 4712;
    *(_QWORD *)(v13 + 72) = a3[1];
    *(_QWORD *)(v13 + 64) = *a3;
    *(_QWORD *)(v13 + 2016) = a3[1];
    *(_QWORD *)(v13 + 2008) = *a3;
    *(_QWORD *)(v13 + 48) = v13;
    *(_QWORD *)v13 = 0xFFFFFFFFLL;
    *(_QWORD *)(v13 + 96) = a1[1].ActiveProcessors.Bitmap[1];
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(v13 + 5240) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v13 + 5968) = BBTBuffer;
    if ( v10 )
    {
      v8 = v13 + 0x2000;
      *(_DWORD *)(v13 + 8208) = 7680;
      *(_DWORD *)(v13 + 8656) = 65534;
      *(_WORD *)(v13 + 11258) = 522;
      *(_DWORD *)(v13 + 11260) = v13 + 11264;
      *(_DWORD *)(v13 + 8228) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v13 + 8224) = *(_DWORD *)a3;
      *(_DWORD *)(v13 + 9912) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v13 + 9908) = *(_DWORD *)a3;
      *(_DWORD *)(v13 + 8216) = v13 + 0x2000;
      *(_DWORD *)(v13 + 0x2000) = -1;
      *(_DWORD *)(v13 + 8240) = v10;
      *(_DWORD *)(v13 + 12144) = v13;
      *(_DWORD *)(v13 + 12056) = *(_DWORD *)(v13 + 5776);
      *(_DWORD *)(v13 + 8196) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(v13 + 8200) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(v13 + 11788) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(v13 + 6156) = 0x2000;
      *(_DWORD *)(v13 + 12252) = -8192;
    }
    *(_QWORD *)v13 = v8;
    KiUnstackDetachProcess(&v17, 0LL);
    *a5 = v13;
  }
  return (unsigned int)PebOrTeb;
}
