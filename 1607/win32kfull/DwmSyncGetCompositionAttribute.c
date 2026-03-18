/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x1C014A140
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0078810 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00B40C4 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v8; // ebx
  int v9; // ecx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int16 v12; // ax
  int v13; // eax
  _OWORD v15[43]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v9 = 0;
    if ( gbInVideoPnpCallout )
      v9 = -1073741823;
    v8 = v9;
    if ( v9 >= 0 )
    {
      memset((char *)v15 + 2, 0, 0x2AEuLL);
      v10 = *(_OWORD *)a4;
      v11 = a4[2];
      *(_DWORD *)((char *)v15 + 2) = -2147483560;
      *((_QWORD *)&v15[2] + 1) = 0x14000002ALL;
      *(_QWORD *)&v15[3] = a2;
      v12 = dword_1C02EDB68[4 * v4];
      DWORD2(v15[3]) = v4;
      LOWORD(v15[0]) = v12 + 24;
      HIDWORD(v15[3]) = dword_1C02EDB68[4 * v4];
      v15[4] = v10;
      *(_QWORD *)&v15[5] = v11;
      v13 = LpcRequestWaitReplyPortEx(Object, v15, v15);
      v8 = SyncLpcCheckNtStatus(v13, (struct _PORT_MESSAGE *)v15);
      if ( v8 >= 0 )
        memmove(a4, &v15[4], *(_QWORD *)&dword_1C02EDB68[4 * v4]);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
