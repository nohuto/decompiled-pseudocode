/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x1C025FC68
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01FD4FC (MagGetLensContextInformation.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0040424 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     Win32OpenSectionByHandle @ 0x1C01D1F00 (Win32OpenSectionByHandle.c)
 */

__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int128 *a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        _DWORD *a10)
{
  int v13; // edi
  int v14; // ecx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[688]; // [rsp+50h] [rbp-B0h] BYREF

  Handle[0] = a4;
  v13 = -1073741823;
  if ( Object )
  {
    v14 = 0;
    if ( gbInVideoPnpCallout )
      v14 = -1073741823;
    v13 = v14;
    if ( v14 >= 0 )
    {
      memset(&v24[2], 0, 0x2AEuLL);
      v15 = *a5;
      v16 = a5[1];
      *(_WORD *)&v24[4] = 0x8000;
      *(_DWORD *)&v24[44] = a7;
      *(_DWORD *)&v24[112] = a8;
      *(HANDLE *)&v24[96] = Handle[0];
      *(_OWORD *)&v24[48] = v15;
      *(_QWORD *)&v15 = *((_QWORD *)a5 + 4);
      *(_QWORD *)&v24[104] = a6;
      *(_DWORD *)v24 = 7602252;
      *(_DWORD *)&v24[40] = 1073741923;
      *(_QWORD *)&v24[88] = a3;
      *(_OWORD *)&v24[64] = v16;
      *(_QWORD *)&v24[80] = v15;
      EtwUpdateEvent(0LL);
      v17 = LpcRequestWaitReplyPortEx(Object, v24, v24);
      v13 = SyncLpcCheckNtStatus(v17, (struct _PORT_MESSAGE *)v24);
      if ( v13 >= 0 )
      {
        v18 = *(_DWORD *)&v24[44];
        *(_DWORD *)a9 = *(_DWORD *)&v24[44];
        if ( v18 < 0 )
        {
          *(_QWORD *)(a9 + 4) = 0LL;
        }
        else
        {
          v19 = *(_DWORD *)&v24[48];
          *(_DWORD *)(a9 + 4) = *(_DWORD *)&v24[64];
          *(_QWORD *)(a9 + 12) = *(_QWORD *)&v24[68];
          *(_DWORD *)(a9 + 20) = *(_DWORD *)&v24[76];
          *(_DWORD *)(a9 + 8) = v19;
          if ( v19 )
          {
            v20 = *(_QWORD *)&v24[52];
            *(_DWORD *)(a9 + 36) = *(_DWORD *)&v24[60];
            if ( (int)ObDuplicateObject(a2, v20, 0LL, Handle, 4, 512, 1, 0) >= 0 )
            {
              Win32OpenSectionByHandle(Handle[0], 4u, v21, (PVOID *)(a9 + 40));
              ZwClose(Handle[0]);
            }
          }
          else
          {
            *(_QWORD *)(a9 + 40) = 0LL;
            *(_DWORD *)(a9 + 36) = 0;
          }
          v13 = 0;
          *a10 = *(_DWORD *)&v24[80];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
