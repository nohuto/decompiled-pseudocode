/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0082460
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C0081A50 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C016253C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000BCBC (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000BCE8 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _UpgradeDispModeFlags @ 0x1C0163D70 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  unsigned int *v4; // rbx
  union _LARGE_INTEGER *Global; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  unsigned int *v14; // rbp
  unsigned int v15; // ebx
  _DWORD *v16; // rdi
  struct _D3DKMT_DISPLAYMODE *v17; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _BYTE v28[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  Global = (union _LARGE_INTEGER *)DXGGLOBAL::GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v28, Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v28);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 7);
  v11 = *((unsigned int *)this + 4);
  v12 = 0;
  v13 = 0;
  if ( !(_DWORD)v11 )
  {
LABEL_13:
    *v4 = v12;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 2, v12);
    return 0LL;
  }
  while ( 1 )
  {
    v14 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v13);
    if ( *v14 )
      break;
LABEL_11:
    v11 = *((unsigned int *)this + 4);
    if ( ++v13 >= (unsigned int)v11 )
    {
      v4 = a4;
      goto LABEL_13;
    }
  }
  v15 = v13 + 1;
  if ( v13 + 1 < (unsigned int)v11 )
  {
    do
    {
      v16 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v15);
      if ( *v16 )
      {
        if ( *v14 == *v16
          && v14[1] == v16[1]
          && v14[2] == v16[2]
          && v14[3] == v16[3]
          && v14[7] == v16[7]
          && v14[8] == v16[8]
          && v14[6] == v16[6] )
        {
          v11 = v14[10] ^ v16[10];
          if ( ((*((_BYTE *)v14 + 40) ^ *((_BYTE *)v16 + 40)) & 0x10) == 0 )
          {
            if ( v14[4] != v16[4] || v14[5] != v16[5] )
            {
              v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
              v19[3] = *v14;
              v19[4] = v14[1];
              v19[5] = (int)v14[2];
              v19[6] = v14[3];
              WdLogEvent5_WdDmmEvent(v19);
              v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20);
              v21[3] = v14[4];
              v21[4] = v14[5];
              v21[5] = (unsigned int)v16[4];
              v21[6] = (unsigned int)v16[5];
              WdLogEvent5_WdDmmEvent(v21);
            }
            UpgradeDispModeFlags(v14, v16, v9, v10);
            v11 = v14[9];
            if ( (v11 & 2) != 0 )
              goto LABEL_11;
            *v16 = 0;
          }
        }
      }
      ++v15;
    }
    while ( v15 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_10:
    ++v12;
    goto LABEL_11;
  }
  if ( v12 < a2 )
  {
    v17 = &a3[v12];
    *(_OWORD *)&v17->Width = *(_OWORD *)v14;
    *(_OWORD *)&v17->RefreshRate.Numerator = *((_OWORD *)v14 + 1);
    *(_QWORD *)&v17->DisplayFixedOutput = *((_QWORD *)v14 + 4);
    *((_DWORD *)&v17->Flags + 1) = v14[10];
    goto LABEL_10;
  }
  v22 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v22 + 24) = 1874LL;
  WdLogEvent5_WdError(v22);
  v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
  *(_QWORD *)(v27 + 24) = a2;
  WdLogEvent5_WdWarning(v27);
  return 3221225507LL;
}
