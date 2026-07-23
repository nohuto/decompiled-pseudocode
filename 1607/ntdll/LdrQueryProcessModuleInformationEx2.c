/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800D08A4
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x18006D5D4 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrpReadMemory @ 0x18006DBF4 (LdrpReadMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _WORD *v5; // rdi
  __int64 *v7; // r14
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned int *v11; // rdx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rsi
  int Memory; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r9
  int v23; // [rsp+34h] [rbp-A4h]
  __int64 v24; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-90h] BYREF
  int v26; // [rsp+4Ch] [rbp-8Ch]
  int v27; // [rsp+50h] [rbp-88h]
  _QWORD v28[2]; // [rsp+58h] [rbp-80h] BYREF
  int v29; // [rsp+68h] [rbp-70h]
  __int64 v30; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v31[12]; // [rsp+78h] [rbp-60h] BYREF
  __int16 v32; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+E8h] [rbp+10h]
  unsigned int v34; // [rsp+F8h] [rbp+20h]

  v34 = a4;
  v33 = a2;
  v5 = a3;
  v7 = a1;
  v8 = 2;
  v31[0] = 0LL;
  v31[1] = LdrpProtectedCopyMemory;
  v31[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v9 = 0;
  }
  else
  {
    v9 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v7 = v31;
  v10 = 0LL;
  v11 = a5;
  while ( 1 )
  {
    v28[1] = v10;
    if ( v10 >= (unsigned __int64)((a2 & 1) != 0) + 1 )
      return v9;
    v23 = 10240;
    v12 = 1;
    if ( v11 )
      *v11 = v8;
    if ( (a2 & 2) != 0 )
      off_180108F80[5 * v10 + 3]();
    v13 = ((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64 *))off_180108F80[5 * v10])(v7, v28, &v30);
    if ( v13 < 0 )
      goto LABEL_14;
    if ( !v28[0] )
      goto LABEL_37;
    v13 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *))off_180108F80[5 * v10 + 1])(v7, v28[0], &v24);
    if ( v13 < 0 )
    {
LABEL_14:
      v9 = v13;
    }
    else
    {
      while ( v24 != v28[0] )
      {
        v15 = v23;
        if ( !v23 )
        {
          v9 = -1073741271;
          break;
        }
        --v23;
        v29 = v15 - 1;
        v8 += 320 * v12;
        v12 = 1;
        v26 = 1;
        v27 = 1;
        if ( v34 >= v8 )
        {
          *v5 = 320;
          v16 = 5 * v10;
          Memory = ((__int64 (__fastcall *)(__int64 *, _WORD *, __int64, __int64, __int64))off_180108F80[5 * v10 + 2])(
                     v7,
                     v5 + 4,
                     v24,
                     v30,
                     a2);
          v14 = 0LL;
          if ( Memory < 0 )
            goto LABEL_23;
          v18 = *((_QWORD *)v5 + 3);
          if ( v18 )
          {
            Memory = LdrpReadMemory(v7, (int)v18 + 60, (int)&v25, 4LL);
            if ( Memory < 0 )
            {
LABEL_23:
              v9 = Memory;
              goto LABEL_38;
            }
            v19 = *((_QWORD *)v5 + 3) + v25;
            v13 = LdrpReadMemory(v7, (int)v19 + 8, (int)v5 + 308, 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v13 = LdrpReadMemory(v7, (int)v19 + 88, (int)v5 + 304, 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v13 = LdrpReadMemory(v7, (int)v19 + 24, (int)&v32, 2LL);
            if ( v13 < 0 )
              goto LABEL_14;
            if ( v32 == 267 )
            {
              v20 = v19 + 52;
              v21 = 4LL;
            }
            else
            {
              v20 = v19 + 48;
              v21 = 8LL;
            }
            v13 = LdrpReadMemory(v7, v20, (int)v5 + 312, v21);
            v14 = 0LL;
            if ( v13 < 0 )
              goto LABEL_14;
            v5 += 160;
            v31[3] = v5;
            *v5 = 0;
            v12 = v26;
          }
          else
          {
            v12 = 0;
            v27 = 0;
          }
        }
        else
        {
          v9 = -1073741820;
        }
        v13 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64 *))off_180108F80[5 * v10 + 1])(v7, v24, &v24);
        if ( v13 < 0 )
          goto LABEL_14;
      }
    }
LABEL_37:
    v16 = 5 * v10;
LABEL_38:
    if ( (a2 & 2) != 0 )
      ((void (__fastcall *)(__int64))off_180108F80[v16 + 4])(v14);
    v11 = a5;
    if ( a5 )
      *a5 = v8;
    ++v10;
  }
}
