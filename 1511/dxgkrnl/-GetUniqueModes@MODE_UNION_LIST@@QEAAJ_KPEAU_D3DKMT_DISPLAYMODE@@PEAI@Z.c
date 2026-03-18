/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00CD3F0
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000DA68 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000DA94 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     sub_1C0141EC4 @ 0x1C0141EC4 (sub_1C0141EC4.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  unsigned int *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  unsigned int *v13; // rbp
  unsigned int v14; // ebx
  _DWORD *v15; // rdi
  struct _D3DKMT_DISPLAYMODE *v16; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _BYTE v27[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v27,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v27);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 7);
  v10 = *((unsigned int *)this + 4);
  v11 = 0;
  v12 = 0;
  if ( !(_DWORD)v10 )
  {
LABEL_13:
    *v4 = v11;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v10) + 2, v11);
    return 0LL;
  }
  while ( 1 )
  {
    v13 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v12);
    if ( *v13 )
      break;
LABEL_11:
    v10 = *((unsigned int *)this + 4);
    if ( ++v12 >= (unsigned int)v10 )
    {
      v4 = a4;
      goto LABEL_13;
    }
  }
  v14 = v12 + 1;
  if ( v12 + 1 < (unsigned int)v10 )
  {
    do
    {
      v15 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v14);
      if ( *v15 )
      {
        if ( *v13 == *v15
          && v13[1] == v15[1]
          && v13[2] == v15[2]
          && v13[3] == v15[3]
          && v13[7] == v15[7]
          && v13[8] == v15[8]
          && v13[6] == v15[6] )
        {
          v10 = v13[10] ^ v15[10];
          if ( ((*((_BYTE *)v13 + 40) ^ *((_BYTE *)v15 + 40)) & 0x10) == 0 )
          {
            if ( v13[4] != v15[4] || v13[5] != v15[5] )
            {
              v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v10);
              v18[3] = *v13;
              v18[4] = v13[1];
              v18[5] = (int)v13[2];
              v18[6] = v13[3];
              WdLogEvent5_WdDmmEvent(v18);
              v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
              v20[3] = v13[4];
              v20[4] = v13[5];
              v20[5] = (unsigned int)v15[4];
              v20[6] = (unsigned int)v15[5];
              WdLogEvent5_WdDmmEvent(v20);
            }
            sub_1C0141EC4(v13, v15);
            v10 = v13[9];
            if ( (v10 & 2) != 0 )
              goto LABEL_11;
            *v15 = 0;
          }
        }
      }
      ++v14;
    }
    while ( v14 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_10:
    ++v11;
    goto LABEL_11;
  }
  if ( v11 < a2 )
  {
    v16 = &a3[v11];
    *(_OWORD *)&v16->Width = *(_OWORD *)v13;
    *(_OWORD *)&v16->RefreshRate.Numerator = *((_OWORD *)v13 + 1);
    *(_QWORD *)&v16->DisplayFixedOutput = *((_QWORD *)v13 + 4);
    *((_DWORD *)&v16->Flags + 1) = v13[10];
    goto LABEL_10;
  }
  v21 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v21 + 24) = 1869LL;
  WdLogEvent5_WdError(v21);
  v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  *(_QWORD *)(v26 + 24) = a2;
  WdLogEvent5_WdWarning(v26);
  return 3221225507LL;
}
