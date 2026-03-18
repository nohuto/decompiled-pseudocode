/*
 * XREFs of ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C01572D8
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0157078 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0157538 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertGdiRgnToRects(DDAMetaData *this)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagRECT *DirtyRectData; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  void *Buffer; // rax
  __int64 v17; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 112LL))(
         *((_QWORD *)this + 8),
         0LL,
         0LL);
  v3 = v2;
  v4 = ((unsigned __int64)v2 - 32) >> 4;
  if ( (unsigned int)v4 <= *((_DWORD *)this + 5) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((void ***)this + 4), v2, 0);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)this + 7) + 112LL))(
            *((_QWORD *)this + 8),
            v3,
            Buffer) )
    {
      v13 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v13 + 24) = 1154LL;
      goto LABEL_11;
    }
    *((_DWORD *)this + 6) = v4;
  }
  else
  {
    v5 = 0;
    if ( *((_DWORD *)this + 11) )
    {
      v6 = (unsigned int *)(**((_QWORD **)this + 6) + 16LL);
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*((_QWORD *)this + 7) + 96LL))(
               *((_QWORD *)this + 9),
               *(v6 - 2),
               *(v6 - 1),
               *v6,
               v6[1]);
        if ( !v8 )
          break;
        if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 9),
                2LL) )
        {
          v14 = WdLogNewEntry5_WdError(v9);
          *(_QWORD *)(v14 + 24) = 1128LL;
          WdLogEvent5_WdError(v14);
          return v8;
        }
        ++v5;
        v6 += 6;
        if ( v5 >= *((_DWORD *)this + 11) )
          goto LABEL_7;
      }
      v13 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v13 + 24) = 1122LL;
      goto LABEL_11;
    }
LABEL_7:
    v10 = *((_QWORD *)this + 7);
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, 1u);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, struct tagRECT *))(v10 + 120))(*((_QWORD *)this + 8), DirtyRectData) )
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = 1136LL;
LABEL_11:
      WdLogEvent5_WdError(v13);
      return 0LL;
    }
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 6) = 1;
    *((_DWORD *)this + 4) = 1;
  }
  return 1LL;
}
