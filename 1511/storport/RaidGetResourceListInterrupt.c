/*
 * XREFs of RaidGetResourceListInterrupt @ 0x1C0012E68
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C0012B84 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1C0012F20 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidGetResourceListInterrupt(
        __int64 *a1,
        char a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        int *a5,
        bool *a6,
        _QWORD *a7,
        unsigned __int8 *a8)
{
  unsigned int v11; // esi
  unsigned __int8 *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned int i; // ebx
  _BYTE *v16; // r9
  unsigned __int8 v18; // al
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  char v22; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v23; // [rsp+38h] [rbp-30h] BYREF
  char v24; // [rsp+70h] [rbp+8h] BYREF

  v11 = -1073741275;
  if ( !a1 )
    return 0LL;
  v12 = a8;
  v13 = *a1;
  *a4 = 0;
  *v12 = 0;
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 16);
    for ( i = 0; i < v14; ++i )
    {
      RaidGetResourceListElement((_DWORD)a1, i, (unsigned int)&v22, (unsigned int)&v24, 0LL, (__int64)&v23);
      v16 = v23;
      if ( *v23 == 2 )
      {
        v18 = v23[4];
        v11 = 0;
        *a4 = v18;
        if ( !a2 )
        {
          v19 = a7;
          v20 = *(_QWORD *)(v16 + 12);
          *a3 = *((_DWORD *)v16 + 2);
          v21 = v16[1] == 3;
          v19[1] = 0LL;
          *v19 = v20;
          *((_WORD *)v19 + 4) = *((_WORD *)v16 + 3);
          *a6 = v21;
          *a5 = v16[2] & 1;
          return v11;
        }
        if ( v18 > *v12 )
          *v12 = v18;
      }
    }
  }
  return v11;
}
