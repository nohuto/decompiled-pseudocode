/*
 * XREFs of ??4PropertyVector@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180028480
 * Callers:
 *     ??4?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x18001CD30 (--4-$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

__int64 __fastcall Input::PropertyVector::operator=(__int64 a1, __int64 a2)
{
  char **v4; // rsi
  char **v5; // rbx

  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    v4 = (char **)(a2 + 32);
    v5 = (char **)(a1 + 32);
    if ( (char **)(a1 + 32) != v4 )
    {
      if ( *v5 )
      {
        std::_Deallocate(*v5, (__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)*v5) >> 3, 8uLL);
        *v5 = 0LL;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      *v5 = *v4;
      *(_QWORD *)(a1 + 40) = v4[1];
      *(_QWORD *)(a1 + 48) = v4[2];
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
  }
  return a1;
}
