/*
 * XREFs of KsepDbQueryRegistryDeviceDataList @ 0x140652A78
 * Callers:
 *     KseQueryDeviceDataList @ 0x140652418 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     KsepRegistryCloseKey @ 0x140514A9C (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 *     KsepStringTransform @ 0x140535480 (KsepStringTransform.c)
 *     KsepRegistryEnumValue @ 0x1406541D0 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406542C4 (KsepRegistryQueryKeyInformation.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceDataList(_WORD *a1, char *a2, unsigned int a3, _DWORD *a4)
{
  ULONG v4; // r15d
  int KeyInformation; // ebx
  PVOID Paged; // r14
  unsigned int v8; // edi
  char *v9; // r12
  int v10; // eax
  size_t v11; // rbx
  HANDLE KeyHandle[2]; // [rsp+30h] [rbp-30h] BYREF
  size_t Size; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-10h]

  v4 = 0;
  LODWORD(v15) = 0;
  v16 = 0LL;
  KeyHandle[0] = 0LL;
  KeyInformation = KsepStringTransform((__int64)&v15, a1);
  if ( KeyInformation >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v16,
                KeyHandle) >= 0 )
    {
      KeyInformation = KsepRegistryQueryKeyInformation(KeyHandle[0]);
      if ( KeyInformation >= 0 )
      {
        Paged = KsepPoolAllocatePaged((size_t)KeyHandle[1]);
        if ( Paged )
        {
          if ( KsepPoolAllocatePaged(Size) )
          {
            v8 = 0;
            v9 = a2;
            while ( 1 )
            {
              v10 = KsepRegistryEnumValue(KeyHandle[0], v4, (__int64)&Size);
              KeyInformation = v10;
              if ( v10 == -2147483622 )
                break;
              if ( v10 < 0 )
                goto LABEL_17;
              v11 = Size;
              v8 += Size;
              if ( v8 <= a3 )
              {
                memmove(v9, Paged, Size);
                v9 += v11;
              }
              ++v4;
            }
            *a4 = v8 + 2;
            if ( (unsigned __int64)v8 + 2 <= a3 )
            {
              KeyInformation = 0;
              *(_WORD *)&a2[2 * ((unsigned __int64)v8 >> 1)] = 0;
            }
            else
            {
              KeyInformation = -1073741789;
            }
          }
          else
          {
            KeyInformation = -1073741801;
          }
LABEL_17:
          KsepPoolFreePaged(Paged);
        }
        else
        {
          KeyInformation = -1073741801;
        }
      }
    }
    else
    {
      KeyInformation = -1073741275;
    }
    if ( KeyHandle[0] )
      KsepRegistryCloseKey(KeyHandle[0]);
  }
  KsepStringFree(&v15);
  return (unsigned int)KeyInformation;
}
