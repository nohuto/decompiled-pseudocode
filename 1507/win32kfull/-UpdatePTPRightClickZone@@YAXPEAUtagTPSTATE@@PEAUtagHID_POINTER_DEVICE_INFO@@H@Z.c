/*
 * XREFs of ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F2AAC
 * Callers:
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1904 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

void __fastcall UpdatePTPRightClickZone(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2, int a3)
{
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v25; // rcx

  if ( a3 )
  {
    if ( (unsigned int)(dword_1C03236EC - 1) > 0x63 )
    {
      v5 = 1000;
      if ( *((_DWORD *)a2 + 54) * (100 - dword_1C03236AC) / 0x64u > 0x3E8 )
        v5 = *((_DWORD *)a2 + 54) * (100 - dword_1C03236AC) / 0x64u;
      *((_DWORD *)a1 + 311) = v5;
    }
    else
    {
      *((_DWORD *)a1 + 311) = *((_DWORD *)a2 + 54) * (100 - dword_1C03236EC) / 100;
    }
    v6 = dword_1C03236F0;
    *((_DWORD *)a1 + 313) = *((_DWORD *)a2 + 54);
    v7 = *((_DWORD *)a2 + 53);
    if ( (unsigned int)(v6 - 1) > 0x63 )
      v8 = dword_1C03236B0 * v7 / 0x64u;
    else
      v8 = v6 * v7 / 100;
    *((_DWORD *)a1 + 326) = v8;
  }
  v10 = IsDPIAbsoluteSysMet(0x17uLL);
  if ( v10 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
    {
      goto LABEL_14;
    }
LABEL_25:
    v17 = gpsi + 2360LL;
    goto LABEL_30;
  }
  if ( IsDPIDWMSysMet(v9)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_25;
  }
LABEL_14:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v13 = 0)
      : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v13) )
  {
    v17 = gpsi + 2748LL;
  }
  else
  {
    v17 = gpsi + 1972LL;
  }
LABEL_30:
  if ( *(_DWORD *)v17 )
  {
    *((_DWORD *)a1 + 310) = 0;
    v18 = *((_DWORD *)a1 + 326);
  }
  else
  {
    v17 = (unsigned int)(*((_DWORD *)a2 + 53) - *((_DWORD *)a1 + 326));
    *((_DWORD *)a1 + 310) = v17;
    v18 = *((_DWORD *)a2 + 53);
  }
  *((_DWORD *)a1 + 312) = v18;
  if ( v10 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
    {
      goto LABEL_36;
    }
LABEL_47:
    v25 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_52;
  }
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_47;
  }
LABEL_36:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v21 = 0)
      : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v21) )
  {
    v25 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v25 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_52:
  *((_DWORD *)a1 + 316) ^= (*((_DWORD *)a1 + 316) ^ (*v25 << 15)) & 0x8000;
}
