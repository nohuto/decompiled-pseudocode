/*
 * XREFs of ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x180009D14
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18000C274 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 * Callees:
 *     ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18000B8D0 (--0-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18000BAD4 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@IEAAXXZ @ 0x18000BC3C (-_Tidy@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@.c)
 *     ?_Tidy@?$vector@PEAGV?$allocator@PEAG@std@@@std@@IEAAXXZ @ 0x18000BCD8 (-_Tidy@-$vector@PEAGV-$allocator@PEAG@std@@@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::SelectionData::GetSelectionScore(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  LPCWCH *v8; // rbx
  LPCWCH *v9; // rsi
  LPCWCH *v10; // rdi
  LPCWCH *v11; // rbp
  int v12; // edi
  __int64 v13; // rsi
  _DWORD **v14; // rax
  _DWORD **v15; // rdx
  _DWORD *i; // rax
  _DWORD *v17; // rcx
  int v18; // eax
  _BYTE v20[24]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v21[88]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+8h]

  v4 = 0;
  if ( *((_BYTE *)this + 61) || *((_BYTE *)a2 + 61) != 1 )
  {
    v5 = std::vector<unsigned short *>::vector<unsigned short *>(v20, (char *)a2 + 8);
    v22 = v5;
    v6 = std::vector<unsigned short *>::vector<unsigned short *>(v21, (char *)this + 8);
    v7 = v6;
    if ( *(_BYTE *)this && *(_BYTE *)a2 )
    {
      v8 = *(LPCWCH **)v6;
      v9 = *(LPCWCH **)(v6 + 8);
      if ( *(LPCWCH **)v6 == v9 )
      {
LABEL_14:
        v4 = -1;
      }
      else
      {
LABEL_7:
        v10 = *(LPCWCH **)v5;
        v11 = *(LPCWCH **)(v5 + 8);
        while ( 1 )
        {
          if ( v10 == v11 )
          {
            if ( ++v8 == v9 )
              goto LABEL_14;
            v5 = v22;
            goto LABEL_7;
          }
          if ( CompareStringOrdinal(*v8, -1, *v10, -1, 0) == 2 )
            break;
          ++v10;
        }
        v4 = 1;
      }
    }
    std::vector<unsigned short *>::_Tidy(v7);
    std::vector<unsigned short *>::_Tidy(v22);
    if ( v4 >= 0 )
    {
      if ( *((_BYTE *)this + 1) && *((_BYTE *)a2 + 1) )
      {
        if ( *((_DWORD *)this + 14) == *((_DWORD *)a2 + 14) )
          ++v4;
        else
          v4 = -1;
      }
      if ( v4 >= 0 )
      {
        if ( *((_BYTE *)this + 2) && *((_BYTE *)a2 + 2) )
        {
          if ( *((_BYTE *)this + 60) == *((_BYTE *)a2 + 60) )
            ++v4;
          else
            v4 = -1;
        }
        if ( v4 >= 0 )
        {
          v12 = 0;
          v13 = std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
                  v21,
                  (char *)a2 + 32);
          v14 = (_DWORD **)std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
                             v20,
                             (char *)this + 32);
          v15 = v14;
          if ( *((_BYTE *)this + 3) && *((_BYTE *)a2 + 3) )
          {
            for ( i = *v14; ; ++i )
            {
              if ( i == v15[1] )
              {
                v12 = -1;
                goto LABEL_38;
              }
              v17 = *(_DWORD **)v13;
              if ( *(_QWORD *)v13 != *(_QWORD *)(v13 + 8) )
                break;
LABEL_35:
              ;
            }
            while ( *i != *v17 )
            {
              if ( ++v17 == *(_DWORD **)(v13 + 8) )
                goto LABEL_35;
            }
            v12 = 1;
          }
LABEL_38:
          std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(v15);
          std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(v13);
          v18 = v4 + 100 * v12;
          v4 = v12;
          if ( v12 >= 0 )
            v4 = v18;
          if ( v4 >= 0 )
          {
            if ( *((_BYTE *)this + 4) && *((_BYTE *)a2 + 4) )
            {
              if ( *((_BYTE *)this + 61) == *((_BYTE *)a2 + 61) )
                ++v4;
              else
                v4 = -1;
            }
            if ( v4 >= 0 && *((_BYTE *)this + 5) && *((_BYTE *)a2 + 5) )
            {
              if ( *((_DWORD *)this + 16) == *((_DWORD *)a2 + 16) )
                ++v4;
              else
                return (unsigned int)-1;
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)v4;
}
