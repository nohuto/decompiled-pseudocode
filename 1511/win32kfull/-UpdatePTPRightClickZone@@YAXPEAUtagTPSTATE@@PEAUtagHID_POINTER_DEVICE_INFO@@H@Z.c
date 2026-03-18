/*
 * XREFs of ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F2D84
 * Callers:
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1A54 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
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
  unsigned __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _DWORD *v28; // rcx

  if ( a3 )
  {
    if ( (*((_BYTE *)a2 + 232) & 2) != 0 )
    {
      *((_DWORD *)a1 + 377) = *((_DWORD *)a2 + 54) * (100 - *((_DWORD *)a2 + 62)) / 100;
    }
    else if ( (unsigned int)(dword_1C0321F9C - 1) > 0x63 )
    {
      v5 = *((_DWORD *)a2 + 54);
      v6 = v5 * (100 - dword_1C0321F0C);
      v7 = v5 - 1000;
      v8 = v6 / 0x64;
      if ( v8 < v7 )
        v7 = v8;
      *((_DWORD *)a1 + 377) = v7;
    }
    else
    {
      *((_DWORD *)a1 + 377) = *((_DWORD *)a2 + 54) * (100 - dword_1C0321F9C) / 100;
    }
    *((_DWORD *)a1 + 379) = *((_DWORD *)a2 + 54);
    if ( (*((_BYTE *)a2 + 232) & 2) != 0 )
    {
      v9 = *((_DWORD *)a2 + 53) * *((_DWORD *)a2 + 61);
    }
    else
    {
      v11 = *((_DWORD *)a2 + 53);
      if ( (unsigned int)(dword_1C0321FA0 - 1) > 0x63 )
      {
        v10 = dword_1C0321F10 * v11 / 0x64u;
        goto LABEL_15;
      }
      v9 = dword_1C0321FA0 * v11;
    }
    v10 = v9 / 100;
LABEL_15:
    *((_DWORD *)a1 + 398) = v10;
  }
  v13 = IsDPIAbsoluteSysMet(0x17uLL);
  if ( v13 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0 )
    {
      goto LABEL_19;
    }
LABEL_30:
    v20 = gpsi + 2360LL;
    goto LABEL_35;
  }
  if ( IsDPIDWMSysMet(v12)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_30;
  }
LABEL_19:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v16 = 0)
      : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v16) )
  {
    v20 = gpsi + 2748LL;
  }
  else
  {
    v20 = gpsi + 1972LL;
  }
LABEL_35:
  if ( *(_DWORD *)v20 )
  {
    *((_DWORD *)a1 + 376) = 0;
    v21 = *((_DWORD *)a1 + 398);
  }
  else
  {
    v20 = (unsigned int)(*((_DWORD *)a2 + 53) - *((_DWORD *)a1 + 398));
    *((_DWORD *)a1 + 376) = v20;
    v21 = *((_DWORD *)a2 + 53);
  }
  *((_DWORD *)a1 + 378) = v21;
  if ( v13 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0 )
    {
      goto LABEL_41;
    }
LABEL_52:
    v28 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_57;
  }
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_52;
  }
LABEL_41:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v24 = 0)
      : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v24) )
  {
    v28 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v28 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_57:
  *((_DWORD *)a1 + 386) ^= (*((_DWORD *)a1 + 386) ^ (*v28 << 15)) & 0x8000;
}
