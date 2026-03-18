/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C003D460
 * Callers:
 *     <none>
 * Callees:
 *     UserRtlFreeMem @ 0x1C0005130 (UserRtlFreeMem.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C003CA20 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  void *v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 19 )
  {
    if ( !*((_QWORD *)this + 24) )
    {
      if ( (Size & 0x1F) == 0 )
      {
        v9 = (void *)Win32AllocPoolWithQuota();
        v10 = (__int64)v9;
        if ( !v9 )
          return (unsigned int)-1073741801;
        v11 = Size >> 5;
        memmove(v9, a4, Size);
        v12 = 0;
        if ( !(unsigned int)(Size >> 5) )
        {
LABEL_11:
          *((_QWORD *)this + 24) = v10;
          *((_DWORD *)this + 50) = v11;
          *a6 = 1;
          *((_DWORD *)this + 4) &= ~0x400u;
          return v6;
        }
        while ( *(_DWORD *)(32LL * v12 + v10 + 28) < *((_DWORD *)this + 46) )
        {
          if ( ++v12 >= (unsigned int)v11 )
            goto LABEL_11;
        }
        UserRtlFreeMem(v10);
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                           this,
                           a2,
                           a3,
                           (const unsigned __int16 *)a4,
                           Size,
                           a6);
  }
}
