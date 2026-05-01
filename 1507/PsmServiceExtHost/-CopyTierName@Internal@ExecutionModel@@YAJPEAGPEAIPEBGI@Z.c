/*
 * XREFs of ?CopyTierName@Internal@ExecutionModel@@YAJPEAGPEAIPEBGI@Z @ 0x180021FB0
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002229C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::CopyTierName(
        ExecutionModel::Internal *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( this )
  {
    if ( *(_DWORD *)a2 >= (unsigned int)a4 )
    {
      *(_DWORD *)a2 = (_DWORD)a4;
      StringCchCopyNW((unsigned __int16 *)this, (unsigned int)a4, a3, (unsigned int)a4);
      return 0LL;
    }
    result = 2147942634LL;
  }
  *(_DWORD *)a2 = (_DWORD)a4;
  return result;
}
