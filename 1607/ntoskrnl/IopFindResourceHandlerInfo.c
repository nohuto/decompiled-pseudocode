/*
 * XREFs of IopFindResourceHandlerInfo @ 0x1405578D0
 * Callers:
 *     IoTranslateBusAddress @ 0x1401CD4C0 (IoTranslateBusAddress.c)
 *     IopSetupArbiterAndTranslators @ 0x1405574E8 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     <none>
 */

char __fastcall IopFindResourceHandlerInfo(int a1, _WORD *a2, unsigned __int8 a3, _QWORD *a4)
{
  int v4; // ecx
  unsigned __int16 v5; // r10
  unsigned __int16 v6; // ax
  __int64 **v7; // rdx
  __int64 *i; // rax

  *a4 = 0LL;
  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 0;
    v5 = a2[262];
    v6 = a2[263];
    v7 = (__int64 **)(a2 + 244);
  }
  else
  {
    v5 = a2[260];
    v6 = a2[261];
    v7 = (__int64 **)(a2 + 252);
  }
  if ( ((unsigned __int16)(1 << a3) & v5) != 0 )
    return 1;
  if ( ((unsigned __int16)(1 << a3) & v6) != 0 || a3 > 0xFu )
  {
    for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 16) == a3 )
      {
        if ( a3 <= 0xFu || i[3] )
          *a4 = i;
        return 1;
      }
    }
  }
  return 0;
}
