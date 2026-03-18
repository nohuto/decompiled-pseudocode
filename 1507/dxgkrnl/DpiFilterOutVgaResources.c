/*
 * XREFs of DpiFilterOutVgaResources @ 0x1C00D7E0C
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1C00D7A80 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiDetermineResourceListSize @ 0x1C00D7FF8 (DpiDetermineResourceListSize.c)
 */

__int64 __fastcall DpiFilterOutVgaResources(__int64 a1, _DWORD *a2, _QWORD *a3, char a4)
{
  unsigned int v4; // esi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  _DWORD *PoolWithTagPriority; // rax
  _DWORD *v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  _DWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v19)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v20; // al
  __int64 v21; // rcx
  bool v22; // zf
  __int64 (__fastcall *v23)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v24; // al
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+90h] [rbp+50h] BYREF
  int v32; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  v30 = 944LL;
  v29 = 655360LL;
  v31 = 960LL;
  if ( a4 == 1 )
  {
    v19 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 560);
    if ( v19 )
    {
      v32 = 0;
      v20 = v19(*(_QWORD *)(a1 + 536), 655360LL, 0x20000LL, &v32, &v29);
      v21 = v29;
      v22 = v20 == 0;
      v23 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 560);
      if ( v22 )
        v21 = 655360LL;
      v32 = 1;
      v29 = v21;
      v24 = v23(*(_QWORD *)(a1 + 536), v30, 12LL, &v32, &v30);
      v25 = v30;
      v22 = v24 == 0;
      v26 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 560);
      if ( v22 )
        v25 = 944LL;
      v32 = 1;
      v30 = v25;
      v27 = v26(*(_QWORD *)(a1 + 536), v31, 32LL, &v32, &v31);
      v28 = v31;
      if ( !v27 )
        v28 = 960LL;
      v31 = v28;
    }
  }
  v8 = a2[4];
  DpiDetermineResourceListSize(a2, &v32);
  v9 = v32 - 60;
  PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                          PagedPool,
                          (unsigned int)(v32 - 60),
                          0x74727044u,
                          HighPoolPriority);
  v11 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, v9);
    *v11 = 1;
    v12 = 0;
    v13 = 0;
    v11[1] = a2[1];
    v11[2] = a2[2];
    v11[3] = 65537;
    v11[4] = v8 - 3;
    if ( v8 )
    {
      v14 = a2 + 6;
      do
      {
        v15 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 != v29 && v15 != v30 && v15 != v31 )
        {
          if ( v13 == v8 - 3 )
          {
            v4 = -1073741823;
            ExFreePoolWithTag(v11, 0);
            v11 = 0LL;
            break;
          }
          v16 = ++v13;
          v17 = 5 * v16;
          *(_OWORD *)&v11[v17] = *(_OWORD *)(v14 - 1);
          v11[v17 + 4] = v14[3];
        }
        ++v12;
        v14 += 5;
      }
      while ( v12 < v8 );
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *a3 = v11;
  return v4;
}
