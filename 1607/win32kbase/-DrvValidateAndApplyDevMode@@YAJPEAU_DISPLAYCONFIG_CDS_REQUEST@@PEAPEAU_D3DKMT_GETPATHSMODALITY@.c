/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005FE98
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rsi
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 result; // rax
  _QWORD *v15; // rax
  struct _D3DKMT_GETPATHSMODALITY *v16; // rcx
  struct _devicemodeW *v17; // r14
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 *v20; // rsi
  int v21; // eax
  _QWORD *v22; // rax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rax
  bool v26; // zf
  int v27; // eax
  __int64 v28; // rdi
  _QWORD *v29; // rax
  int v30; // [rsp+60h] [rbp+7h] BYREF
  __int64 v31; // [rsp+64h] [rbp+Bh]
  int v32; // [rsp+6Ch] [rbp+13h]
  int v33; // [rsp+70h] [rbp+17h]
  int v34; // [rsp+74h] [rbp+1Bh]
  int v35; // [rsp+78h] [rbp+1Fh]
  __int64 v36; // [rsp+80h] [rbp+27h]
  int v37; // [rsp+C0h] [rbp+67h] BYREF
  int v38; // [rsp+C8h] [rbp+6Fh] BYREF

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
  v30 = (*((_DWORD *)a1 + 2) != 0 ? 2 : 0) | 4;
  v31 = *(_QWORD *)(v7 + 264);
  v9 = *(_DWORD *)(v7 + 272);
  v33 = -1;
  v32 = v9;
  v36 = *((_QWORD *)a1 + 4);
  v34 = -2;
  v35 = -2;
  v10 = ((__int64 (__fastcall *)(int *))qword_1C011B468)(&v30);
  v11 = v10;
  LODWORD(v12) = -1073741266;
  if ( v10 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v13[3] = -1073741266LL;
    v13[4] = *((_QWORD *)a1 + 4);
    v13[5] = *((int *)a1 + 13);
    v13[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)v12;
  }
  result = 3221225485LL;
  if ( (_DWORD)v11 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
  }
  else if ( (int)v11 >= 0 )
  {
    v16 = *a2;
    v17 = 0LL;
    if ( *a2 )
    {
      v18 = 0;
      if ( *((_WORD *)v16 + 10) )
      {
        while ( 1 )
        {
          v19 = 216LL * v18;
          if ( *(_DWORD *)((char *)v16 + v19 + 64) == *(_DWORD *)(v7 + 272)
            && *(_DWORD *)((char *)v16 + v19 + 56) == *(_DWORD *)(v7 + 264)
            && *(_DWORD *)((char *)v16 + v19 + 60) == *(_DWORD *)(v7 + 268) )
          {
            break;
          }
          if ( ++v18 >= *((unsigned __int16 *)v16 + 10) )
            goto LABEL_23;
        }
        v17 = *(struct _devicemodeW **)((char *)v16 + v19 + 224);
      }
    }
LABEL_23:
    v20 = (__int64 *)((char *)a1 + 40);
    if ( *((_QWORD *)a1 + 5) )
    {
      Win32FreePool();
      *v20 = 0LL;
    }
    v21 = DrvProbeAndCaptureDevmode(
            (struct tagGRAPHICS_DEVICE *)v7,
            (struct _devicemodeW **)a1 + 5,
            &v38,
            &v37,
            *((struct _devicemodeW **)a1 + 4),
            0,
            *((_DWORD *)a1 + 3),
            *((_DWORD *)a1 + 2),
            0,
            0,
            v17);
    v12 = v21;
    if ( v21 < 0 )
    {
      *((_DWORD *)a1 + 13) = 4;
      *((_DWORD *)a1 + 12) = -2;
      DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
      v22 = (_QWORD *)WdLogNewEntry5_WdError();
      v22[3] = v12;
      v22[4] = *((_QWORD *)a1 + 4);
      v22[5] = *((int *)a1 + 13);
      v22[6] = *((int *)a1 + 12);
      WdLogEvent5_WdError(v22);
      return (unsigned int)v12;
    }
    if ( *((_DWORD *)a1 + 4) && v37 )
      v23 = 8;
    else
      v23 = 0;
    v30 = (*((_DWORD *)a1 + 2) != 0 ? 2 : 0) | v23 | (v37 == 0 ? 0x10 : 0);
    v31 = *(_QWORD *)(v7 + 264);
    v24 = *(_DWORD *)(v7 + 272);
    v33 = -1;
    v32 = v24;
    v25 = *v20;
    v34 = -2;
    v35 = -2;
    if ( !v25 )
      v25 = *((_QWORD *)a1 + 4);
    v26 = *((_DWORD *)a1 + 5) == 0;
    v36 = v25;
    if ( v26 || *((_DWORD *)a1 + 6) )
      v27 = ((__int64 (__fastcall *)(struct _D3DKMT_GETPATHSMODALITY **, int *))qword_1C011B868)(a2, &v30);
    else
      v27 = ((__int64 (__fastcall *)(int *))qword_1C011B468)(&v30);
    v28 = v27;
    if ( v27 >= 0 )
    {
      return 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 12) = -1;
      *((_DWORD *)a1 + 13) = 8;
      v29 = (_QWORD *)WdLogNewEntry5_WdError();
      v29[3] = v28;
      v29[4] = v36;
      v29[5] = *((int *)a1 + 13);
      v29[6] = *((int *)a1 + 12);
      WdLogEvent5_WdError(v29);
      return (unsigned int)v28;
    }
  }
  else
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v15 = (_QWORD *)WdLogNewEntry5_WdError();
    v15[3] = v11;
    v15[4] = *((_QWORD *)a1 + 4);
    v15[5] = *((int *)a1 + 13);
    v15[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v15);
    return (unsigned int)v11;
  }
  return result;
}
