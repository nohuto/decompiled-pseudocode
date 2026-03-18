/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0058120
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C0058474 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct _D3DKMT_GETPATHSMODALITY **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 result; // rax
  _QWORD *v19; // rax
  struct _D3DKMT_GETPATHSMODALITY *v20; // rcx
  struct _devicemodeW *v21; // r14
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 *v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  int v31; // edx
  int v32; // eax
  __int64 v33; // rax
  bool v34; // zf
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  _QWORD *v41; // rax
  int v42; // [rsp+60h] [rbp-20h] BYREF
  __int64 v43; // [rsp+64h] [rbp-1Ch]
  int v44; // [rsp+6Ch] [rbp-14h]
  int v45; // [rsp+70h] [rbp-10h]
  int v46; // [rsp+74h] [rbp-Ch]
  __int64 v47; // [rsp+78h] [rbp-8h]
  int v48; // [rsp+B0h] [rbp+30h] BYREF
  int v49; // [rsp+B8h] [rbp+38h] BYREF

  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v7 + 160) & 0x800000) == 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v42 = (*((_DWORD *)a1 + 2) != 0 ? 2 : 0) | 4;
  v43 = *(_QWORD *)(v7 + 264);
  v9 = *(_DWORD *)(v7 + 272);
  v45 = -1;
  v44 = v9;
  v47 = *((_QWORD *)a1 + 4);
  v46 = -2;
  v10 = ((__int64 (__fastcall *)(int *))qword_1C0104128)(&v42);
  v15 = v10;
  LODWORD(v16) = -1073741266;
  if ( v10 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11);
    v17[3] = -1073741266LL;
    v17[4] = *((_QWORD *)a1 + 4);
    v17[5] = *((int *)a1 + 13);
    v17[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v16;
  }
  result = 3221225485LL;
  if ( (_DWORD)v15 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v15 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13, v14);
    v19[3] = v15;
    v19[4] = *((_QWORD *)a1 + 4);
    v19[5] = *((int *)a1 + 13);
    v19[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v19);
    return (unsigned int)v15;
  }
  v20 = *a2;
  v21 = 0LL;
  if ( *a2 )
  {
    v22 = 0;
    if ( *((_WORD *)v20 + 10) )
    {
      while ( 1 )
      {
        v23 = 216LL * v22;
        if ( *(_DWORD *)((char *)v20 + v23 + 64) == *(_DWORD *)(v7 + 272)
          && *(_DWORD *)((char *)v20 + v23 + 56) == *(_DWORD *)(v7 + 264)
          && *(_DWORD *)((char *)v20 + v23 + 60) == *(_DWORD *)(v7 + 268) )
        {
          break;
        }
        if ( ++v22 >= *((unsigned __int16 *)v20 + 10) )
          goto LABEL_23;
      }
      v21 = *(struct _devicemodeW **)((char *)v20 + v23 + 224);
    }
  }
LABEL_23:
  v24 = (__int64 *)((char *)a1 + 40);
  if ( *((_QWORD *)a1 + 5) )
  {
    Win32FreePool();
    *v24 = 0LL;
  }
  v25 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v7,
          (struct _devicemodeW **)a1 + 5,
          &v49,
          &v48,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          0,
          v21);
  v16 = v25;
  if ( v25 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28, v29);
    v30[3] = v16;
    v30[4] = *((_QWORD *)a1 + 4);
    v30[5] = *((int *)a1 + 13);
    v30[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v30);
    return (unsigned int)v16;
  }
  if ( *((_DWORD *)a1 + 4) && v48 )
    v31 = 8;
  else
    v31 = 0;
  v42 = (*((_DWORD *)a1 + 2) != 0 ? 2 : 0) | v31 | (v48 == 0 ? 0x10 : 0);
  v43 = *(_QWORD *)(v7 + 264);
  v32 = *(_DWORD *)(v7 + 272);
  v45 = -1;
  v44 = v32;
  v33 = *v24;
  v46 = -2;
  if ( !v33 )
    v33 = *((_QWORD *)a1 + 4);
  v34 = *((_DWORD *)a1 + 5) == 0;
  v47 = v33;
  if ( v34 )
  {
    if ( !*((_DWORD *)a1 + 6) )
      return 0LL;
  }
  else if ( !*((_DWORD *)a1 + 6) )
  {
    v35 = ((__int64 (__fastcall *)(int *))qword_1C0104128)(&v42);
    goto LABEL_36;
  }
  v35 = ((__int64 (__fastcall *)(struct _D3DKMT_GETPATHSMODALITY **, int *))qword_1C0104518)(a2, &v42);
LABEL_36:
  v40 = v35;
  if ( v35 < 0 )
  {
    *((_DWORD *)a1 + 12) = -1;
    *((_DWORD *)a1 + 13) = 8;
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38, v39);
    v41[3] = v40;
    v41[4] = v47;
    v41[5] = *((int *)a1 + 13);
    v41[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v41);
    return (unsigned int)v40;
  }
  return 0LL;
}
