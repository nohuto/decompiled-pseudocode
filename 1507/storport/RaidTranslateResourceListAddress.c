/*
 * XREFs of RaidTranslateResourceListAddress @ 0x1C0008600
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C00084C0 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1C00087B0 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidTranslateResourceListAddress(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  unsigned int v8; // edi
  int v9; // r14d
  int v12; // r13d
  unsigned int v13; // ebp
  int v14; // esi
  unsigned __int64 v15; // rdx
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF

  v7 = a7;
  v8 = 0;
  v18 = 0LL;
  v17[0] = 0LL;
  v9 = a2;
  *a7 = 0LL;
  if ( a2 == 17 )
    v9 = 15;
  v12 = a1;
  if ( *(_QWORD *)a1 && (v13 = *(_DWORD *)(*(_QWORD *)a1 + 16LL), v14 = 0, v13) )
  {
    while ( 1 )
    {
      RaidGetResourceListElement(v12, v14, (unsigned int)&a6, (unsigned int)&v19, (__int64)&v18, (__int64)v17);
      if ( a6 == v9 && v19 == a3 )
      {
        v15 = *(_QWORD *)(v18 + 4);
        if ( v15 <= a4 && v15 + *(unsigned int *)(v18 + 12) >= a4 + a5 )
          break;
      }
      if ( ++v14 >= v13 )
        return (unsigned int)-1073741823;
    }
    *v7 = a4 + *(_QWORD *)(v17[0] + 4LL) - v15;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
