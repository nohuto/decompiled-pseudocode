/*
 * XREFs of AuthzBasepAddAccessTypeList @ 0x140092320
 * Callers:
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x140092400 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepSetAppContainerAccessReasons @ 0x14023430C (AuthzBasepSetAppContainerAccessReasons.c)
 *     AuthzBasepUpdateParentTypeList @ 0x140234350 (AuthzBasepUpdateParentTypeList.c)
 */

__int64 __fastcall AuthzBasepAddAccessTypeList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 result; // rax
  unsigned int v9; // r12d
  unsigned int v11; // edi
  unsigned __int16 *v12; // rbx
  char v13; // r11
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r11
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // edx
  int v26; // ecx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v9 = a2;
  if ( !a6 )
  {
    v11 = a5;
    v12 = (unsigned __int16 *)(a1 + 48LL * a3);
    v14 = *((_DWORD *)v12 + 6);
    result = v14 & ~a5;
    *((_DWORD *)v12 + 6) = result;
    if ( v14 == (_DWORD)result )
      return result;
LABEL_8:
    v15 = 0x10000;
LABEL_9:
    result = AuthzBasepSetAccessReasons(v11 & v14, v15, a4, *((_QWORD *)v12 + 5), 0);
    goto LABEL_5;
  }
  if ( a6 == 1 )
  {
    v11 = a5;
    v12 = (unsigned __int16 *)(a1 + 48LL * a3);
    a2 = *((unsigned int *)v12 + 7);
    result = (unsigned int)a2 | a5 & ~*((_DWORD *)v12 + 8);
    *((_DWORD *)v12 + 7) = result;
    if ( (_DWORD)a2 == (_DWORD)result )
      goto LABEL_4;
    v14 = ~(_DWORD)a2 & ~*((_DWORD *)v12 + 8);
    goto LABEL_8;
  }
  if ( a6 != 2 )
  {
    if ( a6 != 3 )
      return result;
    v11 = a5;
    v12 = (unsigned __int16 *)(a1 + 48LL * a3);
    result = *((unsigned int *)v12 + 7);
    v16 = a5 & *((_DWORD *)v12 + 7);
    *((_DWORD *)v12 + 7) = v16;
    if ( (_DWORD)result != (_DWORD)v16 )
    {
      result = AuthzBasepSetAppContainerAccessReasons(v16, a2, a4, *((_QWORD *)v12 + 5));
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v11 = a5;
  v12 = (unsigned __int16 *)(a1 + 48LL * a3);
  a2 = *((unsigned int *)v12 + 8);
  result = (unsigned int)a2 | a5 & ~*((_DWORD *)v12 + 7);
  *((_DWORD *)v12 + 8) = result;
  if ( (_DWORD)a2 != (_DWORD)result )
  {
    v14 = ~(_DWORD)a2 & ~*((_DWORD *)v12 + 7);
    v15 = 0x20000;
    goto LABEL_9;
  }
LABEL_4:
  v13 = 1;
LABEL_5:
  if ( v9 != 1 )
  {
    if ( !v13 )
      result = AuthzBasepUpdateParentTypeList(a1, v9, a3, a4, a6);
    v17 = a3 + 1;
    if ( (unsigned int)v17 < v9 )
    {
      v18 = 48 * v17 + a1 + 28;
      do
      {
        result = *v12;
        if ( *(_WORD *)(v18 - 28) <= (unsigned __int16)result )
          return result;
        if ( a6 )
        {
          if ( a6 != 1 )
          {
            if ( a6 != 2 )
            {
              v19 = (*(_DWORD *)v18 & v11) == 0;
              v20 = *(_DWORD *)v18 & v11;
              *(_DWORD *)v18 = v20;
              if ( !v19 )
                result = AuthzBasepSetAppContainerAccessReasons(v20, a2, a4, *(_QWORD *)(v18 + 12));
              goto LABEL_35;
            }
            v21 = ~*(_DWORD *)v18;
            v22 = v21 & ~*(_DWORD *)(v18 + 4);
            a2 = v11 & v21;
            *(_DWORD *)(v18 + 4) |= a2;
            v23 = v11 & v22;
            if ( v23 )
            {
              v24 = 0x20000;
LABEL_34:
              result = AuthzBasepSetAccessReasons(v23, v24, a4, *(_QWORD *)(v18 + 12), 0);
              goto LABEL_35;
            }
            goto LABEL_35;
          }
          v25 = ~*(_DWORD *)(v18 + 4);
          v26 = v25 & ~*(_DWORD *)v18;
          a2 = v11 & v25;
          *(_DWORD *)v18 |= a2;
        }
        else
        {
          v26 = *(_DWORD *)(v18 - 4);
          result = v26 & ~v11;
          *(_DWORD *)(v18 - 4) = result;
        }
        v23 = v11 & v26;
        if ( v23 )
        {
          v24 = 0x10000;
          goto LABEL_34;
        }
LABEL_35:
        LODWORD(v17) = v17 + 1;
        v18 += 48LL;
      }
      while ( (unsigned int)v17 < v9 );
    }
  }
  return result;
}
