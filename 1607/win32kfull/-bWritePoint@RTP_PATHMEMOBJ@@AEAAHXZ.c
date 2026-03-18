/*
 * XREFs of ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02BB964
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02BB5A0 (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTP_PATHMEMOBJ::bWritePoint(RTP_PATHMEMOBJ *this)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h]

  v2 = 1;
  v3 = *((int *)this + 49);
  v4 = *((_DWORD *)this + 42);
  if ( v4 == 2 )
  {
    v5 = v3;
    v6 = *((_DWORD *)this + 2 * v3 + 53) - *((_DWORD *)this + 45);
    v7 = *((_DWORD *)this + 2 * v3 + 54) - *((_DWORD *)this + 46);
    v10 = __PAIR64__(v7, v6);
    if ( v6 != *((_DWORD *)this + 47) || v7 != *((_DWORD *)this + 48) )
    {
      v2 = EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 20), 0LL, (struct _POINTL *)((char *)this + 172), 1u);
      if ( v2 )
      {
        *(_QWORD *)((char *)this + 172) = *(_QWORD *)((char *)this + 180);
        *(_QWORD *)((char *)this + 188) = v10;
      }
    }
    *(_QWORD *)((char *)this + 180) = *(_QWORD *)((char *)this + 8 * v5 + 212);
  }
  else
  {
    if ( v4 )
    {
      if ( v4 != 1 )
        return 0;
      v8 = *(_QWORD *)((char *)this + 8 * v3 + 212);
      *(_QWORD *)((char *)this + 180) = v8;
      *((_DWORD *)this + 47) = v8 - *((_DWORD *)this + 43);
      *((_DWORD *)this + 48) = *((_DWORD *)this + 46) - *((_DWORD *)this + 44);
    }
    else
    {
      *(_QWORD *)((char *)this + 172) = *(_QWORD *)((char *)this + 8 * v3 + 212);
    }
    ++*((_DWORD *)this + 42);
  }
  return v2;
}
