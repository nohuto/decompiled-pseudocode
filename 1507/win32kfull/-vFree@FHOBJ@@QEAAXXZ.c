/*
 * XREFs of ?vFree@FHOBJ@@QEAAXXZ @ 0x1C012A1A0
 * Callers:
 *     ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C012934C (-bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FHOBJ::vFree(FHOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(v1 + 8) )
    {
      do
      {
        v4 = *(_QWORD **)(*((_QWORD *)this + 1) + 8 * v3 + 40);
        if ( v4 )
        {
          do
          {
            v6 = (_QWORD *)v4[1];
            v7 = (_QWORD *)*v4;
            if ( v6 )
            {
              do
              {
                v8 = (_QWORD *)*v6;
                Win32FreePool(v6);
                v6 = v8;
              }
              while ( v8 );
            }
            Win32FreePool(v4);
            v4 = v7;
          }
          while ( v7 );
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) );
    }
    Win32FreePool(*((_QWORD *)this + 1));
  }
  v5 = *(_QWORD **)this;
  *((_QWORD *)this + 1) = 0LL;
  *v5 = 0LL;
}
