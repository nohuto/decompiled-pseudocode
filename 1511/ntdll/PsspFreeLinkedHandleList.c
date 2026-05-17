/*
 * XREFs of PsspFreeLinkedHandleList @ 0x18008B98C
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18008B488 (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(__int64 *a1)
{
  unsigned int *v1; // rbx
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v4 = a1;
    do
    {
      v1 = (unsigned int *)a1 + 3;
      v2 = (__int64 *)*a1;
      if ( *((_WORD *)a1 + 5) )
      {
        v3 = *((unsigned __int16 *)a1 + 5);
        do
        {
          NtClose((HANDLE)*v1++);
          --v3;
        }
        while ( v3 );
      }
      v5 = 1LL;
      ZwFreeVirtualMemory(-1LL, &v4, &v5, 0x8000LL);
      a1 = v2;
      v4 = v2;
    }
    while ( v2 );
  }
}
