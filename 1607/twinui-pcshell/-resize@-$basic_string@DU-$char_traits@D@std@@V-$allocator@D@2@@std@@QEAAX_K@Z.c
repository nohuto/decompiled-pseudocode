/*
 * XREFs of ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180009674
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180009440 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180009ABC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180009B94 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset @ 0x18002F32C (memset.c)
 */

void __fastcall std::string::resize(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v3; // rbx
  size_t v4; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v2 = a1[2];
  v3 = a1;
  if ( a2 <= v2 )
  {
    a1[2] = a2;
    if ( a1[3] >= 0x10uLL )
      v3 = (_QWORD *)*a1;
    *((_BYTE *)v3 + a2) = 0;
    return;
  }
  v4 = a2 - v2;
  if ( -1LL - v2 <= a2 - v2 )
    std::wstring::_Xlen();
  if ( v4 )
  {
    if ( a2 == -1LL )
      std::wstring::_Xlen();
    if ( a1[3] >= a2 )
    {
      if ( a2 )
      {
LABEL_16:
        v7 = v3[2];
        if ( v4 == 1 )
        {
          if ( v3[3] < 0x10uLL )
            v8 = v3;
          else
            v8 = (_QWORD *)*v3;
          *((_BYTE *)v8 + v7) = 0;
        }
        else
        {
          if ( v3[3] < 0x10uLL )
            v9 = v3;
          else
            v9 = (_QWORD *)*v3;
          memset((char *)v9 + v7, 0, v4);
        }
        v3[2] = a2;
        if ( v3[3] >= 0x10uLL )
          v3 = (_QWORD *)*v3;
        *((_BYTE *)v3 + a2) = 0;
        return;
      }
      a1[2] = 0LL;
      if ( a1[3] < 0x10uLL )
        v6 = a1;
      else
        v6 = (_BYTE *)*a1;
      *v6 = 0;
    }
    else
    {
      std::string::_Copy(a1);
    }
    if ( !a2 )
      return;
    goto LABEL_16;
  }
}
