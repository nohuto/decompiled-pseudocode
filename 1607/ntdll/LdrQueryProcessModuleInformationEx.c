/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x18006D8F0
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x18006D2B0 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x18006D5D4 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryNextListEntry @ 0x18006DBE0 (LdrQueryNextListEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        _QWORD *a1,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _QWORD *v7; // r13
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned int *v11; // rdx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  _DWORD *v18; // [rsp+38h] [rbp-90h]
  __int64 v19; // [rsp+40h] [rbp-88h] BYREF
  BOOL v20; // [rsp+48h] [rbp-80h]
  __int64 v21; // [rsp+50h] [rbp-78h]
  unsigned __int64 v22; // [rsp+58h] [rbp-70h]
  int v23; // [rsp+60h] [rbp-68h]
  _QWORD v24[11]; // [rsp+70h] [rbp-58h] BYREF
  int v25; // [rsp+D0h] [rbp+8h]

  v7 = a1;
  v8 = 8;
  v24[0] = 0LL;
  v24[1] = &LdrpProtectedCopyMemory;
  v24[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 < 8 )
  {
    v9 = -1073741820;
    v18 = 0LL;
  }
  else
  {
    *a3 = 0;
    v18 = a3 + 2;
    v9 = 0;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v7 = v24;
  v10 = 0LL;
  v11 = a5;
  while ( 1 )
  {
    v22 = v10;
    if ( v10 >= (unsigned __int64)((a2 & 1) != 0) + 1 )
      return v9;
    v25 = 10240;
    v12 = 1;
    if ( v11 )
      *v11 = v8;
    if ( (a2 & 2) != 0 )
      _guard_dispatch_icall_fptr();
    v13 = _guard_dispatch_icall_fptr();
    if ( v13 < 0 )
      goto LABEL_28;
    if ( !v21 )
      goto LABEL_30;
    v13 = _guard_dispatch_icall_fptr();
    if ( v13 < 0 )
    {
LABEL_28:
      v9 = v13;
    }
    else
    {
      while ( 1 )
      {
        v14 = v19;
        if ( v19 == v21 )
          break;
        v15 = v25;
        if ( !v25 )
        {
          v9 = -1073741271;
          break;
        }
        --v25;
        v23 = v15 - 1;
        v8 += 296 * v12;
        v12 = 1;
        v20 = 1;
        v16 = a4;
        if ( a4 < v8 )
        {
          v9 = -1073741820;
        }
        else
        {
          v13 = _guard_dispatch_icall_fptr();
          if ( v13 < 0 )
            goto LABEL_28;
          v20 = *((_QWORD *)v18 + 2) != 0LL;
          v12 = v20;
          v18 += 74 * v20;
          v24[3] = v18;
          v14 = v19;
          v16 = a4;
        }
        if ( a3 && v16 >= 0x130 )
          *a3 += v12;
        if ( (char *)off_180108F80[5 * v10 + 1] == (char *)LdrQueryNextListEntry )
          v13 = LdrQueryNextListEntry(v7, v14, &v19);
        else
          v13 = _guard_dispatch_icall_fptr();
        if ( v13 < 0 )
          goto LABEL_28;
      }
    }
LABEL_30:
    if ( (a2 & 2) != 0 )
      _guard_dispatch_icall_fptr();
    v11 = a5;
    if ( a5 )
      *a5 = v8;
    ++v10;
  }
}
