/*
 * XREFs of MiBackSystemImageWithPagefile @ 0x140551060
 * Callers:
 *     MmBackSystemImageWithPagefile @ 0x140550FC8 (MmBackSystemImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x140551060 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiBackSingleImageWithPagefile @ 0x140547918 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x140551060 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MiBackSystemImageWithPagefile(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rbx
  int v6; // r9d
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-20h]
  unsigned __int64 v16; // [rsp+40h] [rbp-18h]

  v3 = a1[6];
  v14 = a2;
  if ( v3 >= qword_140326950 && v3 < qword_140326950 + 0x8000000000LL )
    return 3221225793LL;
  if ( a1[14] && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    MiBackSingleImageWithPagefile((__int64)a1);
  v5 = a1[17];
  v6 = 0;
  if ( v5 == -2LL || v5 == 1 )
    return 0LL;
  if ( (v5 & 1) != 0 )
  {
    v13[0] = 1LL;
    v13[1] = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    v5 = (unsigned __int64)v13;
  }
  v8 = 0;
  v16 = v5;
  if ( *(_QWORD *)v5 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v5 + 8 * v9 + 8);
      if ( !v10 )
        break;
      if ( *(_QWORD *)(v10 + 136) != 1LL )
      {
        if ( a2 )
        {
          v11 = a2;
LABEL_20:
          v12 = 0LL;
          while ( *(_QWORD *)(v11[2] + 8 * v12 + 8) != v10 )
          {
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 > *((_DWORD *)v11 + 2) )
            {
              v11 = (__int64 *)*v11;
              if ( !v11 )
                goto LABEL_14;
              goto LABEL_20;
            }
          }
        }
        else
        {
LABEL_14:
          v15 = v8;
          v6 = MiBackSystemImageWithPagefile(v10, &v14);
          if ( v6 < 0 )
            return (unsigned int)v6;
        }
      }
      v9 = ++v8;
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)v5 );
  }
  return (unsigned int)v6;
}
