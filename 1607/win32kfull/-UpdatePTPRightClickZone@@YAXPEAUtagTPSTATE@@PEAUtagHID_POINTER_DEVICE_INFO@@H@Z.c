/*
 * XREFs of ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E9284
 * Callers:
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7F18 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall UpdatePTPRightClickZone(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2, int a3)
{
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // ecx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  _DWORD *v54; // rcx

  if ( a3 )
  {
    if ( (*((_BYTE *)a2 + 232) & 2) != 0 )
    {
      *((_DWORD *)a1 + 471) = *((_DWORD *)a2 + 54) * (100 - *((_DWORD *)a2 + 62)) / 100;
    }
    else if ( (unsigned int)(dword_1C0328180 - 1) > 0x63 )
    {
      v5 = *((_DWORD *)a2 + 54);
      v6 = v5 * (100 - dword_1C03280CC);
      v7 = v5 - 1000;
      v8 = v6 / 0x64;
      if ( v8 < v7 )
        v7 = v8;
      *((_DWORD *)a1 + 471) = v7;
    }
    else
    {
      *((_DWORD *)a1 + 471) = *((_DWORD *)a2 + 54) * (100 - dword_1C0328180) / 100;
    }
    *((_DWORD *)a1 + 473) = *((_DWORD *)a2 + 54);
    if ( (*((_BYTE *)a2 + 232) & 2) != 0 )
    {
      v9 = *((_DWORD *)a2 + 53) * *((_DWORD *)a2 + 61);
    }
    else
    {
      v11 = *((_DWORD *)a2 + 53);
      if ( (unsigned int)(dword_1C0328184 - 1) > 0x63 )
      {
        v10 = dword_1C03280D0 * v11 / 0x64u;
        goto LABEL_15;
      }
      v9 = dword_1C0328184 * v11;
    }
    v10 = v9 / 100;
LABEL_15:
    *((_DWORD *)a1 + 524) = v10;
  }
  v14 = IsDPIAbsoluteSysMet(0x17uLL);
  if ( v14 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v15, v16) & 0xF) != 0 )
      goto LABEL_18;
LABEL_28:
    v30 = gpsi + 2360LL;
    goto LABEL_33;
  }
  if ( IsDPIDWMSysMet(v13)
    && (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_28;
  }
LABEL_18:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v20, v17, v18, v19) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
      ? (v21 = 0)
      : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v21) )
  {
    v30 = gpsi + 2748LL;
  }
  else
  {
    v30 = gpsi + 1972LL;
  }
LABEL_33:
  if ( *(_DWORD *)v30 )
  {
    *((_DWORD *)a1 + 470) = 0;
    v31 = *((_DWORD *)a1 + 524);
  }
  else
  {
    v30 = (unsigned int)(*((_DWORD *)a2 + 53) - *((_DWORD *)a1 + 524));
    *((_DWORD *)a1 + 470) = v30;
    v31 = *((_DWORD *)a2 + 53);
  }
  *((_DWORD *)a1 + 472) = v31;
  if ( v14 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v30, v17, v18, v19) & 0xF) != 0 )
      goto LABEL_38;
LABEL_48:
    v54 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_53;
  }
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_48;
  }
LABEL_38:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 408)
      ? (v42 = 0)
      : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v42) )
  {
    v54 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v54 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_53:
  *((_DWORD *)a1 + 480) ^= (*((_DWORD *)a1 + 480) ^ (*v54 << 15)) & 0x8000;
}
