/*
 * XREFs of ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C004D980
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C003EBB8 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C004CF90 (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetBufferProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  _QWORD *v17; // rsi
  unsigned __int64 v18; // r15
  _QWORD *v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _OWORD *v23; // rax

  v6 = 0;
  *a6 = 0;
  v10 = a3 - 4;
  if ( !v10 )
  {
    if ( Size == 8 && !*((_QWORD *)this + 16) )
    {
      *((_QWORD *)this + 12) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size == 8 )
    {
      v21 = *a4;
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 13) = v21;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    if ( Size == 16 )
    {
      if ( *((_QWORD *)this + 17) )
        return (unsigned int)-1073741790;
      v23 = (_OWORD *)Win32AllocPoolWithQuota();
      *((_QWORD *)this + 17) = v23;
      if ( v23 )
      {
        *v23 = *(_OWORD *)a4;
        goto LABEL_12;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    if ( Size == 8 )
    {
      *((_QWORD *)this + 19) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 2;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( Size == 8 && (*((_BYTE *)this + 192) & 2) != 0 )
        v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
      else
        v6 = -1073741811;
      if ( (v6 & 0x80000000) == 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 0x10u;
        *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = *a4;
        *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = 0LL;
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          a2,
          *((struct DirectComposition::CAnimationTimeList **)this + 8));
        *((_DWORD *)this + 4) |= 0x8000u;
LABEL_12:
        *a6 = 1;
        return v6;
      }
      return v6;
    }
    if ( v15 == 1 && (Size & 0xF) == 0 && (*((_BYTE *)this + 192) & 2) != 0 )
    {
      v17 = 0LL;
      LODWORD(v18) = 0;
      if ( !Size )
        goto LABEL_25;
      v19 = (_QWORD *)Win32AllocPoolWithQuota();
      v17 = v19;
      if ( v19 )
      {
        memmove(v19, a4, Size);
        v20 = 1;
        v18 = Size >> 4;
        if ( (unsigned int)(Size >> 4) > 1 )
        {
          v22 = v17 + 2;
          while ( *v22 >= v17[2 * v20 - 2] )
          {
            ++v20;
            v22 += 2;
            if ( v20 >= (unsigned int)v18 )
              goto LABEL_25;
          }
          v6 = -1073741811;
          Win32FreePool();
          return v6;
        }
LABEL_25:
        if ( *((_QWORD *)this + 28) )
        {
          Win32FreePool();
          *((_DWORD *)this + 4) |= 0x10000u;
        }
        *((_DWORD *)this + 59) = 0;
        *((_QWORD *)this + 28) = v17;
        *((_DWORD *)this + 58) = v18;
        goto LABEL_12;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  if ( Size == 1 && (*((_BYTE *)this + 192) & 2) != 0 )
    v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
  else
    v6 = -1073741811;
  if ( (v6 & 0x80000000) == 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 8u;
    *(_BYTE *)(*((_QWORD *)this + 8) + 28LL) = *(_BYTE *)a4;
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      a2,
      *((struct DirectComposition::CAnimationTimeList **)this + 8));
    *((_DWORD *)this + 4) |= 0x4000u;
    goto LABEL_12;
  }
  return v6;
}
