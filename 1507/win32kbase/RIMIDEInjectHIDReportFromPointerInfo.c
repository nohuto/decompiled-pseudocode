/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00C5F7C
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C00ACFB0 (NtUserInjectPointerInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMIDEFillContactUsageValues @ 0x1C00C5934 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C00C5AF0 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00C7638 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(void *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r12
  int v6; // edi
  _DWORD *v7; // r14
  unsigned int v8; // r13d
  unsigned __int64 v9; // r15
  unsigned int v10; // r8d
  unsigned int v11; // r12d
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  unsigned int v22; // r9d
  struct tagINPUT_INJECTION_VALUE *v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int *v27; // rdx
  __int64 v28; // r13
  void *v29; // r12
  __int64 v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  int v39; // eax
  __int64 v40; // rcx
  struct tagINPUT_INJECTION_VALUE *v42; // [rsp+28h] [rbp-99h] BYREF
  unsigned int v43; // [rsp+30h] [rbp-91h] BYREF
  __int128 v44; // [rsp+38h] [rbp-89h] BYREF
  __int128 v45; // [rsp+48h] [rbp-79h]
  __int128 v46; // [rsp+58h] [rbp-69h]
  __int128 v47; // [rsp+68h] [rbp-59h]
  __int128 v48; // [rsp+78h] [rbp-49h]
  __int128 v49; // [rsp+88h] [rbp-39h]
  __int128 v50; // [rsp+98h] [rbp-29h]
  __int128 v51; // [rsp+A8h] [rbp-19h]
  __int128 v52; // [rsp+B8h] [rbp-9h]
  __int64 v53; // [rsp+C8h] [rbp+7h]
  unsigned int *v55; // [rsp+130h] [rbp+6Fh] BYREF
  unsigned int v56; // [rsp+138h] [rbp+77h]
  unsigned int v57; // [rsp+140h] [rbp+7Fh]

  v56 = a3;
  v55 = a2;
  v3 = 0;
  v4 = a3;
  v42 = 0LL;
  v57 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( (unsigned int)BuildValueDeviceUsages(*a2, &v42, &v43) )
  {
    v8 = v43;
    v9 = v4 * v43;
    if ( v9 > 0xFFFFFFFF )
      goto LABEL_26;
    if ( *a2 == 2 )
      v8 = v43 - 2;
    v7 = Win32AllocPoolZInit(12LL * (unsigned int)v9);
    if ( v7 )
    {
      v10 = v56;
      v11 = 0;
      if ( v56 )
      {
        while ( !v6 )
        {
          v12 = 38LL * v11;
          v13 = *(_OWORD *)&v55[v12 + 4];
          v44 = *(_OWORD *)&v55[v12];
          v14 = *(_OWORD *)&v55[v12 + 8];
          v45 = v13;
          v15 = *(_OWORD *)&v55[v12 + 12];
          v46 = v14;
          v16 = *(_OWORD *)&v55[v12 + 16];
          v47 = v15;
          v17 = *(_OWORD *)&v55[v12 + 20];
          v48 = v16;
          v18 = *(_OWORD *)&v55[v12 + 24];
          v49 = v17;
          v19 = *(_OWORD *)&v55[v12 + 28];
          v50 = v18;
          v20 = *(_OWORD *)&v55[v12 + 32];
          v21 = *(_QWORD *)&v55[v12 + 36];
          v51 = v19;
          v52 = v20;
          v53 = v21;
          if ( (unsigned int)RIMIDEFillContactUsageValues(v42, v8, (int *)&v44) )
          {
            v22 = 0;
            if ( v8 )
            {
              v23 = v42;
              v24 = v57;
              do
              {
                if ( v24 >= (unsigned int)v9 )
                  break;
                ++v22;
                v25 = v24++;
                v26 = 3 * v25;
                *(_QWORD *)&v7[v26] = *(_QWORD *)v23;
                v7[v26 + 2] = *((_DWORD *)v23 + 2);
                LOWORD(v7[v26 + 2]) = v11 + 1;
                *((_DWORD *)v23 + 1) = 0;
                v23 = (struct tagINPUT_INJECTION_VALUE *)((char *)v23 + 12);
              }
              while ( v22 < v8 );
              v57 = v24;
            }
          }
          else
          {
            v6 = 1;
          }
          v10 = v56;
          if ( ++v11 >= v56 )
          {
            if ( v6 )
              break;
            goto LABEL_17;
          }
        }
      }
      else
      {
LABEL_17:
        v27 = v55;
        if ( *v55 == 2 )
        {
          v28 = v57 + 1;
          if ( (unsigned int)v28 > (unsigned int)v9 )
            goto LABEL_21;
          v29 = a1;
          v30 = 3LL * v57;
          v7[v30 + 1] = v10;
          v7[v30] = 5505037;
          LOWORD(v7[v30 + 2]) = 0;
          v31 = *(_OWORD *)(v27 + 6);
          v44 = *(_OWORD *)(v27 + 2);
          v32 = *(_OWORD *)(v27 + 10);
          v45 = v31;
          v33 = *(_OWORD *)(v27 + 14);
          v46 = v32;
          v34 = *(_OWORD *)(v27 + 18);
          v47 = v33;
          v35 = *(_OWORD *)(v27 + 22);
          v48 = v34;
          v36 = *(_OWORD *)(v27 + 26);
          v49 = v35;
          v37 = *(_OWORD *)(v27 + 30);
          v50 = v36;
          v38 = *(_OWORD *)(v27 + 34);
          v51 = v37;
          v52 = v38;
          if ( !(unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v44, (unsigned int *)&v55) )
          {
LABEL_21:
            v6 = 1;
            goto LABEL_27;
          }
          v39 = (int)v55;
          v40 = 3 * v28;
          LODWORD(v9) = v28 + 1;
          v7[v40] = 5636109;
          v7[v40 + 1] = v39;
          LOWORD(v7[v40 + 2]) = 0;
        }
        else
        {
          v29 = a1;
        }
        if ( (int)RIMIDEInjectDeviceInput(v29, (__int64)v7, v9) < 0 )
          v6 = 1;
      }
    }
    else
    {
LABEL_26:
      v6 = 1;
    }
  }
LABEL_27:
  if ( v42 )
    Win32FreePool();
  if ( v7 )
    Win32FreePool();
  LOBYTE(v3) = v6 == 0;
  return v3;
}
