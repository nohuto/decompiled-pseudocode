/*
 * XREFs of ACPIBuildProcessSynchronizationList @ 0x1C0025CA4
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C0011D70 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C0012160 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0025DA4 (WPP_RECORDER_SF_sqss.c)
 */

__int64 ACPIBuildProcessSynchronizationList()
{
  PSLIST_ENTRY v0; // rdi
  unsigned int v1; // ebx
  char v2; // bp
  PSLIST_ENTRY v3; // rsi
  _QWORD *v5; // rax
  __int64 *v6; // r10
  __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v0 = AcpiBuildSynchronizationList;
  v1 = 0;
  v2 = 1;
  if ( AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
  {
    do
    {
      v3 = v0;
      v0 = v0->Next;
      if ( v3[5].Next->Next == v3[5].Next )
      {
        v5 = (_QWORD *)*((_QWORD *)&v3[2].Next + 1);
        v6 = qword_1C002C340;
        v7 = qword_1C002C340;
        LOBYTE(v8) = 0;
        if ( v5 )
        {
          v9 = v5[1];
          v8 = *((_QWORD *)&v3[2].Next + 1);
          if ( (v9 & 0x200000000000LL) != 0 )
          {
            v6 = (__int64 *)v5[70];
            if ( (v9 & 0x400000000000LL) != 0 )
              v7 = (__int64 *)v5[71];
          }
        }
        v11 = (__int64)v7;
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_sqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v7,
          6,
          67,
          v10,
          (__int64)(&v3[5].Next + 1),
          v8,
          (__int64)v6,
          v11);
        ACPIBuildProcessGenericComplete(v3);
      }
      else
      {
        v2 = 0;
      }
    }
    while ( v0 != (PSLIST_ENTRY)&AcpiBuildSynchronizationList );
    if ( !v2 )
      return 259;
  }
  return v1;
}
