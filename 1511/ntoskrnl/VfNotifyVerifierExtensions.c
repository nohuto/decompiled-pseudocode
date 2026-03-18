/*
 * XREFs of VfNotifyVerifierExtensions @ 0x1406B8D74
 * Callers:
 *     VfDriverLoadImage @ 0x1406B20A4 (VfDriverLoadImage.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1406C7B70 (VfSuspectDriversUnloadCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfNotifyVerifierExtensions(int a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+40h] [rbp-18h]

  if ( ViFnXdvNotifyExtensions )
  {
    if ( a1 )
    {
      result = (unsigned int)(a1 - 1);
      if ( (unsigned int)result > 1 )
        return result;
      v3 = a1;
      v4 = a2 + 88;
      v5 = *(_QWORD *)(a2 + 48);
      v6 = *(_DWORD *)(a2 + 64);
      v7 = *(_DWORD *)(a2 + 156);
      v8 = *(_DWORD *)(a2 + 120);
    }
    else
    {
      v3 = 0;
      LODWORD(v4) = a2;
    }
    return ViFnXdvNotifyExtensions(&v3);
  }
  return result;
}
