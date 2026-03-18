/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x1C00402A8
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0040424 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        _DWORD *a10,
        _QWORD *a11)
{
  int v11; // ebx
  int v15; // eax
  _BYTE v17[688]; // [rsp+28h] [rbp-E0h] BYREF

  v11 = -1073741823;
  if ( Object )
  {
    v11 = 0;
    if ( gbInVideoPnpCallout )
      v11 = -1073741823;
    if ( v11 >= 0 )
    {
      memset(&v17[2], 0, 0x2AEuLL);
      *(_DWORD *)v17 = 6029364;
      *(_WORD *)&v17[4] = 0x8000;
      *(_DWORD *)&v17[52] = a5;
      *(_DWORD *)&v17[56] = a6;
      *(_DWORD *)&v17[60] = a7;
      *(_DWORD *)&v17[64] = a8;
      *(_DWORD *)&v17[68] = *a10;
      *(_QWORD *)&v17[72] = a9;
      *(_DWORD *)&v17[40] = -2147483642;
      *(_QWORD *)&v17[80] = a2;
      *(double *)&v17[44] = a4;
      *(_DWORD *)&v17[88] = a3;
      EtwUpdateEvent(0LL);
      v15 = LpcRequestWaitReplyPortEx(Object, v17, v17);
      v11 = SyncLpcCheckNtStatus(v15, (struct _PORT_MESSAGE *)v17);
      if ( v11 >= 0 && *(_WORD *)v17 == 20 )
      {
        if ( *(int *)&v17[44] < 0 )
        {
          v11 = -1073741823;
        }
        else
        {
          *a10 = *(_DWORD *)&v17[48];
          *a11 = *(_QWORD *)&v17[52];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v11;
}
