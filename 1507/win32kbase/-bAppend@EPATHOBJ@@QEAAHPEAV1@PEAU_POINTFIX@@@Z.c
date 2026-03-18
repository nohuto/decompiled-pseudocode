/*
 * XREFs of ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C00AFE60
 * Callers:
 *     <none>
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0025C30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0025C98 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bAppend(EPATHOBJ *this, struct EPATHOBJ *a2, struct _POINTFIX *a3)
{
  __int64 *i; // rdi
  int v7; // ecx
  int v8; // esi
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+24h] [rbp-24h]
  __int64 *v12; // [rsp+28h] [rbp-20h]
  struct _POINTL v13; // [rsp+58h] [rbp+10h] BYREF

  for ( i = *(__int64 **)(*((_QWORD *)a2 + 1) + 32LL); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      *(_DWORD *)this &= ~2u;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *(_DWORD *)this |= 1u;
      result = 1LL;
      *((_DWORD *)this + 1) += *((_DWORD *)a2 + 1);
      return result;
    }
    v7 = *((_DWORD *)i + 4);
    v8 = *((_DWORD *)i + 5);
    v11 = v8;
    v10 = v7 & 0x10;
    v12 = i + 3;
    if ( (v7 & 1) != 0 )
    {
      v13.x = a3->x + *((_DWORD *)i + 6);
      v13.y = a3->y + *((_DWORD *)i + 7);
      EPATHOBJ::bMoveTo(this, 0LL, &v13);
      v11 = --v8;
      v12 = i + 4;
    }
    if ( v8 )
      break;
LABEL_7:
    if ( (i[2] & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) |= 8u;
      *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) |= 1u;
    }
  }
  while ( (unsigned int)EPATHOBJ::createrec(this, 0LL, (struct _PATHDATAL *)&v10, a3) )
  {
    if ( !v11 )
      goto LABEL_7;
  }
  return 0LL;
}
