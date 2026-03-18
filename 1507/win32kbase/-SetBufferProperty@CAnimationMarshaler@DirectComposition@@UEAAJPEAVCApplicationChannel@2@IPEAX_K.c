/*
 * XREFs of ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C002C670
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C002BDDC (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C002D9DC (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetBufferProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  unsigned __int64 v16; // rbp
  unsigned int v17; // ecx
  __int64 v18; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx

  v6 = 0;
  *a6 = 0;
  v10 = a3 - 4;
  if ( !v10 )
  {
    if ( a5 != 8 || *((_QWORD *)this + 16) )
      return (unsigned int)-1073741811;
    *((_QWORD *)this + 12) = *a4;
    goto LABEL_26;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 == 8 )
    {
      *((_QWORD *)this + 13) = *a4;
      Win32FreePool(a4);
      *((_DWORD *)this + 4) |= 0x40u;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    if ( a5 == 16 )
    {
      if ( *((_QWORD *)this + 17) )
        return (unsigned int)-1073741790;
      *((_QWORD *)this + 17) = a4;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    if ( a5 == 8 )
    {
      *((_QWORD *)this + 19) = *a4;
LABEL_26:
      v20 = a4;
      goto LABEL_21;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 2;
  if ( !v14 )
  {
    if ( a5 != 1 || (*((_BYTE *)this + 192) & 2) == 0 )
      return (unsigned int)-1073741811;
    v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 8u;
    *(_BYTE *)(*((_QWORD *)this + 8) + 28LL) = *(_BYTE *)a4;
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      a2,
      *((struct DirectComposition::CAnimationTimeList **)this + 8));
    *((_DWORD *)this + 4) |= 0x8000u;
LABEL_20:
    *a6 = 1;
    v20 = a4;
LABEL_21:
    Win32FreePool(v20);
    return v6;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( a5 != 8 || (*((_BYTE *)this + 192) & 2) == 0 )
      return (unsigned int)-1073741811;
    v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 0x10u;
    *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = *a4;
    *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = 0LL;
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      a2,
      *((struct DirectComposition::CAnimationTimeList **)this + 8));
    *((_DWORD *)this + 4) |= 0x10000u;
    goto LABEL_20;
  }
  if ( v15 != 1 || (a5 & 0xF) != 0 || (*((_BYTE *)this + 192) & 2) == 0 )
    return (unsigned int)-1073741811;
  v16 = a5 >> 4;
  v17 = 1;
  if ( (unsigned int)(a5 >> 4) > 1 )
  {
    v21 = a4 + 2;
    while ( *v21 >= a4[2 * v17 - 2] )
    {
      ++v17;
      v21 += 2;
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
LABEL_11:
  v18 = *((_QWORD *)this + 28);
  if ( v18 )
  {
    Win32FreePool(v18);
    *((_DWORD *)this + 4) |= 0x20000u;
  }
  *((_DWORD *)this + 59) = 0;
  *((_QWORD *)this + 28) = a4;
  *((_DWORD *)this + 58) = v16;
LABEL_14:
  *a6 = 1;
  return v6;
}
