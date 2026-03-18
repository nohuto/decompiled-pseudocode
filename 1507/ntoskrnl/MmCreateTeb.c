/*
 * XREFs of MmCreateTeb @ 0x140420A54
 * Callers:
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreateTeb(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rsi
  unsigned int v10; // ebx
  int PebOrTeb; // edi
  __int64 v12; // rbx
  unsigned __int64 v14; // [rsp+20h] [rbp-78h]
  _QWORD v15[2]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v16[48]; // [rsp+38h] [rbp-60h] BYREF

  v15[1] = a5;
  v9 = 0LL;
  v10 = 6200;
  v14 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
  if ( v14 )
    v10 = 12288;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v16);
  PebOrTeb = MiCreatePebOrTeb(BugCheckParameter1, a4, v10, v15);
  if ( PebOrTeb < 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  }
  else
  {
    v12 = v15[0];
    *(_DWORD *)(v15[0] + 32LL) = 7680;
    *(_DWORD *)(v12 + 744) = 65534;
    *(_WORD *)(v12 + 4698) = 522;
    *(_QWORD *)(v12 + 4704) = v12 + 4712;
    *(_QWORD *)(v12 + 72) = a3[1];
    *(_QWORD *)(v12 + 64) = *a3;
    *(_QWORD *)(v12 + 2016) = a3[1];
    *(_QWORD *)(v12 + 2008) = *a3;
    *(_QWORD *)(v12 + 48) = v12;
    *(_QWORD *)v12 = 0xFFFFFFFFLL;
    *(_QWORD *)(v12 + 96) = BugCheckParameter1[1].ActiveProcessors.Bitmap[1];
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v12 + 16) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(v12 + 5240) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v12 + 5968) = BBTBuffer;
    if ( v14 )
    {
      v9 = v12 + 0x2000;
      *(_DWORD *)(v12 + 8208) = 7680;
      *(_DWORD *)(v12 + 8656) = 65534;
      *(_WORD *)(v12 + 11258) = 522;
      *(_DWORD *)(v12 + 11260) = v12 + 11264;
      *(_DWORD *)(v12 + 8228) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v12 + 8224) = *(_DWORD *)a3;
      *(_DWORD *)(v12 + 9912) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v12 + 9908) = *(_DWORD *)a3;
      *(_DWORD *)(v12 + 8216) = v12 + 0x2000;
      *(_DWORD *)(v12 + 0x2000) = -1;
      *(_DWORD *)(v12 + 8240) = v14;
      *(_DWORD *)(v12 + 12144) = v12;
      *(_DWORD *)(v12 + 12056) = *(_DWORD *)(v12 + 5776);
      *(_DWORD *)(v12 + 8196) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(v12 + 8200) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(v12 + 11788) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(v12 + 6156) = 0x2000;
      *(_DWORD *)(v12 + 12252) = -8192;
    }
    *(_QWORD *)v12 = v9;
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
    *a5 = v12;
  }
  return (unsigned int)PebOrTeb;
}
