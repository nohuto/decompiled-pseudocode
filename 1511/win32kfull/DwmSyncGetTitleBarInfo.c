/*
 * XREFs of DwmSyncGetTitleBarInfo @ 0x1C00C7CB8
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C00C7B60 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00CA094 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmSyncGetTitleBarInfo(PVOID Object, __int64 a2, __int128 *a3, _DWORD *a4)
{
  int v8; // edi
  int v9; // ecx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _BYTE v28[688]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    v9 = 0;
    if ( gbInVideoPnpCallout )
      v9 = -1073741823;
    v8 = v9;
    if ( v9 >= 0 )
    {
      memset(&v28[2], 0, 0x2AEuLL);
      v10 = *a3;
      *(_QWORD *)&v28[44] = a2;
      v11 = a3[1];
      *(_DWORD *)v28 = 12845212;
      *(_DWORD *)&v28[40] = 1073741850;
      *(_WORD *)&v28[4] = 0x8000;
      *(_OWORD *)&v28[52] = v10;
      v12 = *((_QWORD *)a3 + 16);
      v13 = a3[2];
      *(_OWORD *)&v28[68] = v11;
      v14 = a3[3];
      *(_OWORD *)&v28[84] = v13;
      v15 = a3[4];
      *(_OWORD *)&v28[100] = v14;
      v16 = a3[5];
      *(_OWORD *)&v28[116] = v15;
      v17 = a3[6];
      *(_OWORD *)&v28[132] = v16;
      *(_OWORD *)&v28[148] = v17;
      *(_OWORD *)&v28[164] = a3[7];
      *(_QWORD *)&v28[180] = v12;
      *(_DWORD *)&v28[188] = *((_DWORD *)a3 + 34);
      v18 = LpcRequestWaitReplyPortEx(Object, v28, v28);
      v8 = SyncLpcCheckNtStatus(v18, (struct _PORT_MESSAGE *)v28);
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)&v28[52] == 140 )
        {
          v19 = *(_QWORD *)&v28[180];
          v20 = *(_OWORD *)&v28[68];
          *a3 = *(_OWORD *)&v28[52];
          v21 = *(_OWORD *)&v28[84];
          a3[1] = v20;
          v22 = *(_OWORD *)&v28[100];
          a3[2] = v21;
          v23 = *(_OWORD *)&v28[116];
          a3[3] = v22;
          v24 = *(_OWORD *)&v28[132];
          a3[4] = v23;
          v25 = *(_OWORD *)&v28[148];
          a3[5] = v24;
          v26 = *(_OWORD *)&v28[164];
          a3[6] = v25;
          a3[7] = v26;
          *((_QWORD *)a3 + 16) = v19;
          *((_DWORD *)a3 + 34) = *(_DWORD *)&v28[188];
          *a4 = *(_DWORD *)&v28[192];
        }
        else
        {
          v8 = -1073741453;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
