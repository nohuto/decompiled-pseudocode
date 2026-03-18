/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005EFE0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct _D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rcx
  struct _devicemodeW *v11; // r10
  unsigned int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+64h] [rbp-1Ch]
  int v28; // [rsp+6Ch] [rbp-14h]
  int v29; // [rsp+70h] [rbp-10h]
  int v30; // [rsp+74h] [rbp-Ch]
  __int64 v31; // [rsp+78h] [rbp-8h]
  int v32; // [rsp+B0h] [rbp+30h] BYREF
  int v33; // [rsp+B8h] [rbp+38h] BYREF

  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) || *((_QWORD *)a1 + 5) )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
  }
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v22);
  }
  v26 = (*((_DWORD *)a1 + 2) != 0 ? 2 : 0) | 4;
  v27 = *(_QWORD *)(v4 + 264);
  v5 = *(_DWORD *)(v4 + 272);
  v29 = -1;
  v28 = v5;
  v31 = *((_QWORD *)a1 + 4);
  v30 = -2;
  v6 = ((__int64 (__fastcall *)(int *))qword_1C0101308)(&v26);
  v8 = v6;
  if ( v6 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v7);
    v23[3] = -1073741266LL;
    v23[4] = *((_QWORD *)a1 + 4);
    v23[5] = *((int *)a1 + 13);
    v23[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v23);
    return 3221226030LL;
  }
  result = 3221225485LL;
  if ( (_DWORD)v8 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v8 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
LABEL_32:
    v24 = (_QWORD *)WdLogNewEntry5_WdError();
    v24[3] = v8;
    v24[4] = *((_QWORD *)a1 + 4);
    v24[5] = *((int *)a1 + 13);
    v24[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v24);
    return (unsigned int)v8;
  }
  v10 = (__int64)*a2;
  v11 = 0LL;
  if ( *a2 )
  {
    v12 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      while ( 1 )
      {
        v13 = 216LL * v12;
        if ( *(_DWORD *)(v13 + v10 + 64) == *(_DWORD *)(v4 + 272)
          && *(_DWORD *)(v13 + v10 + 56) == *(_DWORD *)(v4 + 264)
          && *(_DWORD *)(v13 + v10 + 60) == *(_DWORD *)(v4 + 268) )
        {
          break;
        }
        if ( ++v12 >= *(unsigned __int16 *)(v10 + 20) )
          goto LABEL_16;
      }
      v11 = *(struct _devicemodeW **)(v13 + v10 + 224);
    }
  }
LABEL_16:
  v14 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v4,
          (struct _devicemodeW **)a1 + 5,
          &v33,
          &v32,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          0,
          v11);
  v8 = v14;
  if ( v14 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    goto LABEL_32;
  }
  if ( *((_DWORD *)a1 + 4) && v32 )
    v15 = 8;
  else
    v15 = 0;
  v26 = (*((_DWORD *)a1 + 2) != 0 ? 2 : 0) | v15 | (v32 == 0 ? 0x10 : 0);
  v27 = *(_QWORD *)(v4 + 264);
  v16 = *(_DWORD *)(v4 + 272);
  v29 = -1;
  v28 = v16;
  v17 = *((_QWORD *)a1 + 5);
  v30 = -2;
  if ( !v17 )
    v17 = *((_QWORD *)a1 + 4);
  v18 = *((_DWORD *)a1 + 5) == 0;
  v31 = v17;
  if ( v18 )
  {
    if ( !*((_DWORD *)a1 + 6) )
      return 0LL;
    goto LABEL_39;
  }
  if ( *((_DWORD *)a1 + 6) )
  {
LABEL_39:
    v19 = ((__int64 (__fastcall *)(struct _D3DKMT_GETPATHSMODALITY **, int *))qword_1C0101700)(a2, &v26);
    goto LABEL_24;
  }
  v19 = ((__int64 (__fastcall *)(int *))qword_1C0101308)(&v26);
LABEL_24:
  v20 = v19;
  if ( v19 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v25 = (_QWORD *)WdLogNewEntry5_WdError();
  v25[3] = v20;
  v25[4] = v31;
  v25[5] = *((int *)a1 + 13);
  v25[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v25);
  return (unsigned int)v20;
}
