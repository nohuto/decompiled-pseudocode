/*
 * XREFs of ?ComputeDisplayBounds@CDisplaySet@@AEAAXXZ @ 0x180035F0C
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplaySet::ComputeDisplayBounds(CDisplaySet *this)
{
  __int64 i; // r9
  int v3; // r10d
  _DWORD *v4; // r8
  bool v5; // al
  int v6; // ecx
  BOOL v7; // r11d
  bool v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * i);
    v5 = *((_DWORD *)this + 8) <= v3 || *((_DWORD *)this + 9) <= *((_DWORD *)this + 7);
    v6 = v4[26];
    v7 = v5;
    v8 = v4[28] <= v6 || v4[29] <= v4[27];
    if ( v7 )
    {
      if ( v8 )
      {
        *((_DWORD *)this + 9) = 0;
        *((_DWORD *)this + 8) = 0;
        *((_DWORD *)this + 7) = 0;
        *((_DWORD *)this + 6) = 0;
      }
      else
      {
        *(_OWORD *)((char *)this + 24) = *(_OWORD *)(v4 + 26);
      }
    }
    else if ( !v8 )
    {
      if ( v6 < v3 )
        *((_DWORD *)this + 6) = v6;
      v9 = v4[27];
      if ( v9 < *((_DWORD *)this + 7) )
        *((_DWORD *)this + 7) = v9;
      v10 = v4[28];
      if ( v10 > *((_DWORD *)this + 8) )
        *((_DWORD *)this + 8) = v10;
      v11 = v4[29];
      if ( v11 > *((_DWORD *)this + 9) )
        *((_DWORD *)this + 9) = v11;
    }
  }
}
