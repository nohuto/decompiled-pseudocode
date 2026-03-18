/*
 * XREFs of ACPIEnumerateTables @ 0x1C0072AC0
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C00048D0 (ACPIEnumMapTableHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIEnumerateTables(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  _DWORD **v8; // r9
  __int64 v9; // r10
  _DWORD *v10; // rax

  v4 = 0;
  v5 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  if ( v5 && (v6 = *v5) != 0 )
  {
    v7 = 4 * v6;
    if ( a2 )
    {
      if ( *a2 < v7 )
      {
        *a2 = v7;
        return (unsigned int)-1073741789;
      }
      else
      {
        if ( v6 )
        {
          v8 = (_DWORD **)(v5 + 2);
          v9 = v6;
          do
          {
            v10 = *v8++;
            *a1++ = *v10;
            --v9;
          }
          while ( v9 );
        }
        *a2 = v7;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1072431079;
  }
  return v4;
}
