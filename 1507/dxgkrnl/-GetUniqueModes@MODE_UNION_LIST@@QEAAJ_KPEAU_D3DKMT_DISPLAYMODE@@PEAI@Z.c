/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00D3560
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00D2CA4 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000E800 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000E82C (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _UpgradeDispModeFlags @ 0x1C013BA98 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  unsigned int *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  unsigned int *v19; // rbp
  unsigned int v20; // ebx
  _DWORD *v21; // rdi
  struct _D3DKMT_DISPLAYMODE *v22; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _BYTE v33[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, (__int64)a3, (__int64)a4);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v33,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v33);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v10, v9, v11, v12) + 7);
  v16 = *((unsigned int *)this + 4);
  v17 = 0;
  v18 = 0;
  if ( !(_DWORD)v16 )
  {
LABEL_13:
    *v4 = v17;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v16, v13, v14, v15) + 2, v17);
    return 0LL;
  }
  while ( 1 )
  {
    v19 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v18);
    if ( *v19 )
      break;
LABEL_11:
    v16 = *((unsigned int *)this + 4);
    if ( ++v18 >= (unsigned int)v16 )
    {
      v4 = a4;
      goto LABEL_13;
    }
  }
  v20 = v18 + 1;
  if ( v18 + 1 < (unsigned int)v16 )
  {
    do
    {
      v21 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v20);
      if ( *v21 )
      {
        if ( *v19 == *v21
          && v19[1] == v21[1]
          && v19[2] == v21[2]
          && v19[3] == v21[3]
          && v19[7] == v21[7]
          && v19[8] == v21[8]
          && v19[6] == v21[6] )
        {
          v16 = v19[10] ^ v21[10];
          if ( ((*((_BYTE *)v19 + 40) ^ *((_BYTE *)v21 + 40)) & 0x10) == 0 )
          {
            if ( v19[4] != v21[4] || v19[5] != v21[5] )
            {
              v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
              v24[3] = *v19;
              v24[4] = v19[1];
              v24[5] = (int)v19[2];
              v24[6] = v19[3];
              WdLogEvent5_WdDmmEvent(v24);
              v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25);
              v26[3] = v19[4];
              v26[4] = v19[5];
              v26[5] = (unsigned int)v21[4];
              v26[6] = (unsigned int)v21[5];
              WdLogEvent5_WdDmmEvent(v26);
            }
            UpgradeDispModeFlags(v19, v21);
            v16 = v19[9];
            if ( (v16 & 2) != 0 )
              goto LABEL_11;
            *v21 = 0;
          }
        }
      }
      ++v20;
    }
    while ( v20 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_10:
    ++v17;
    goto LABEL_11;
  }
  if ( v17 < a2 )
  {
    v22 = &a3[v17];
    *(_OWORD *)&v22->Width = *(_OWORD *)v19;
    *(_OWORD *)&v22->RefreshRate.Numerator = *((_OWORD *)v19 + 1);
    *(_QWORD *)&v22->DisplayFixedOutput = *((_QWORD *)v19 + 4);
    *((_DWORD *)&v22->Flags + 1) = v19[10];
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v27 + 24) = 1799LL;
  WdLogEvent5_WdError(v27);
  v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
  *(_QWORD *)(v32 + 24) = a2;
  WdLogEvent5_WdWarning(v32);
  return 3221225507LL;
}
