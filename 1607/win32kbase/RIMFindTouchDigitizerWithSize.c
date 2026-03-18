/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x1C00D38F0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0010C90 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = (__int64 *)gObRimDevList;
  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  while ( v2 != &gObRimDevList )
  {
    v5 = v2 - 2;
    if ( *((_BYTE *)v2 + 96) == 2 )
    {
      if ( *((_DWORD *)v5 + 95) )
      {
        if ( (v5[31] & 0x100) == 0 )
        {
          v6 = v5[68];
          if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 1) <= 3 )
          {
            v7 = *(_QWORD *)(v6 + 140) - *a1;
            if ( !v7 )
              v7 = *(_QWORD *)(v6 + 148) - a1[1];
            if ( !v7 )
            {
              RawInputManagerDeviceObjectReference(v2 - 2);
              *a2 = v5;
              break;
            }
          }
        }
      }
    }
    v2 = (__int64 *)*v2;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
}
