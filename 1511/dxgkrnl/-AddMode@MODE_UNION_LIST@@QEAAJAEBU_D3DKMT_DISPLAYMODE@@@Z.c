/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B8780
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v3; // ecx
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v8; // rdi
  SIZE_T v9; // rax
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  ++*((_DWORD *)this + 4);
  v3 = *((_DWORD *)this + 6);
  if ( *((_DWORD *)this + 4) <= v3 )
  {
LABEL_2:
    v5 = *((_QWORD *)this + 1);
    v6 = 44LL * (unsigned int)(*((_DWORD *)this + 4) - 1);
    *(_OWORD *)(v6 + v5) = *(_OWORD *)&a2->Width;
    *(_OWORD *)(v6 + v5 + 16) = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)(v6 + v5 + 32) = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)(v6 + v5 + 40) = *((_DWORD *)&a2->Flags + 1);
    return 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 1);
  v9 = 44LL * (v3 + 500);
  if ( !is_mul_ok(v3 + 500, 0x2CuLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 1) = v10;
  if ( v10 )
  {
    if ( v8 )
    {
      memmove(v10, v8, 44LL * *((unsigned int *)this + 6));
      memset((void *)(*((_QWORD *)this + 1) + 44LL * *((unsigned int *)this + 6)), 0, 0x55F0uLL);
      operator delete(v8);
    }
    else
    {
      memset(v10, 0, 0x55F0uLL);
    }
    *((_DWORD *)this + 6) += 500;
    goto LABEL_2;
  }
  v14 = WdLogNewEntry5_WdLowResource(0LL, v11, v12, v13);
  *(_QWORD *)(v14 + 24) = 1668LL;
  WdLogEvent5_WdLowResource(v14);
  operator delete(v8);
  return 3221225495LL;
}
