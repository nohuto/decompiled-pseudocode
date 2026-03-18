/*
 * XREFs of ?vFree@FHOBJ@@QEAAXXZ @ 0x1C0027964
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C0107C9C (-bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FHOBJ::vFree(FHOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbp
  _QWORD *v10; // rbx

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 8) )
    {
      do
      {
        v6 = *(_QWORD **)(*((_QWORD *)this + 1) + 8 * v5 + 40);
        if ( v6 )
        {
          do
          {
            v8 = (_QWORD *)v6[1];
            v9 = (_QWORD *)*v6;
            if ( v8 )
            {
              do
              {
                v10 = (_QWORD *)*v8;
                Win32FreePool(v8, a2, a3);
                v8 = v10;
              }
              while ( v10 );
            }
            Win32FreePool(v6, a2, a3);
            v6 = v9;
          }
          while ( v9 );
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) );
    }
    Win32FreePool(*((_QWORD *)this + 1), a2, a3);
  }
  v7 = *(_QWORD **)this;
  *((_QWORD *)this + 1) = 0LL;
  *v7 = 0LL;
}
