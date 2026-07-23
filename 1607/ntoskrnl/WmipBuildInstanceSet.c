/*
 * XREFs of WmipBuildInstanceSet @ 0x1405378A0
 * Callers:
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x14069F3D0 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x14069F7F8 (WmipUpdateModifyGuid.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14010B264 (RtlStringCchCopyNW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipValidateWmiRegInfoString @ 0x140537B98 (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537BD0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1405383F8 (WmipMangleInstanceName.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  int v7; // eax
  wchar_t *v11; // r14
  int v12; // eax
  unsigned __int64 v13; // r11
  int v14; // eax
  int v15; // ebx
  unsigned __int16 *v17; // rsi
  size_t v18; // r15
  PVOID PoolWithTag; // rax
  _DWORD *v20; // r12
  SIZE_T v21; // r14
  unsigned __int64 v22; // rbx
  unsigned int i; // esi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rdi
  unsigned int v29; // r12d
  unsigned __int16 *v30; // rax
  size_t v31; // rcx
  size_t v32; // r13
  __int64 v33; // rax
  unsigned __int16 *v34; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v35; // [rsp+68h] [rbp+10h]

  v5 = (unsigned int)a1[5];
  v7 = a5;
  *(_DWORD *)(a4 + 16) &= 0xFFFD7FF8;
  *(_DWORD *)(a4 + 76) = 0;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 80) = v7;
  v11 = 0LL;
  v12 = a1[4];
  v34 = 0LL;
  if ( (v12 & 1) != 0 )
    *(_DWORD *)(a4 + 16) |= 4u;
  if ( (a1[4] & 0x80000) != 0 )
  {
    *(_DWORD *)(a4 + 16) |= 0x1000u;
    if ( (a1[4] & 0x1000) != 0 )
      *(_DWORD *)(a4 + 16) |= 0x80000u;
  }
  if ( (a1[4] & 0x40) != 0 )
    *(_DWORD *)(a4 + 16) |= 0x8000u;
  v13 = (unsigned int)a1[6];
  v35 = (unsigned __int16 *)(v13 + a2);
  v14 = a1[4];
  if ( (v14 & 4) == 0 )
  {
    if ( (v14 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &v34) >= 0 )
    {
      v17 = v34;
      if ( v34 )
      {
        v18 = (unsigned __int64)*v34 >> 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * (int)v18 + 4 + 2LL, 0x70696D57u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
        {
          RtlStringCchCopyNW((NTSTRSAFE_PWSTR)PoolWithTag + 2, v18 + 1, v17 + 1, v18);
          *v20 = WmipDetermineInstanceBaseIndex(a1, v20 + 1);
          *(_DWORD *)(a4 + 16) |= 1u;
          *(_QWORD *)(a4 + 88) = v20;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) |= 0x20000u;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v21 = 1LL;
  v22 = 0LL;
  for ( i = 0; i < (unsigned int)v5; LODWORD(v13) = v13 + 2 * v25 )
  {
    v34 = 0LL;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &v34) < 0 || !v34 )
      return (unsigned int)-1073741811;
    v24 = (unsigned __int64)*v34 >> 1;
    if ( v24 > v22 )
      v22 = (unsigned __int64)*v34 >> 1;
    v21 += 2 * v24 + 22;
    v25 = v24 + 1;
    if ( v24 == -1LL || !is_mul_ok(v25, 2uLL) || v13 + 2 * v25 < v13 )
      return (unsigned int)-1073741675;
    ++i;
  }
  v26 = ExAllocatePoolWithTag(PagedPool, v21, 0x70696D57u);
  v27 = v26;
  if ( !v26 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v26;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v22 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v28 = &v27[v5];
  v29 = 0;
  if ( (_DWORD)v5 )
  {
    v30 = v35;
    v31 = v22 + 1;
    v34 = (unsigned __int16 *)(v22 + 1);
    do
    {
      *v27 = v28;
      v32 = (unsigned __int64)*v30 >> 1;
      v35 = v30 + 1;
      RtlStringCchCopyNW(v11, v31, v30 + 1, v32);
      v15 = WmipMangleInstanceName(a1, v11, v32 + 7, v28);
      if ( v15 < 0 )
        goto LABEL_9;
      v33 = -1LL;
      do
        ++v33;
      while ( *((_WORD *)v28 + v33) );
      v31 = (size_t)v34;
      v28 = (_QWORD *)((char *)v28 + 2 * v33 + 2);
      ++v29;
      ++v27;
      v30 = &v35[v32];
    }
    while ( v29 < (unsigned int)v5 );
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v15;
}
