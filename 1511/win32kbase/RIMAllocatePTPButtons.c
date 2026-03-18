/*
 * XREFs of RIMAllocatePTPButtons @ 0x1C00D1278
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C0007494 (RIMGetDeviceButtons.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMAllocatePTPButtons(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r15d
  int v7; // r12d
  int v8; // ebp
  int v9; // edi
  int v10; // esi
  void *v11; // rax
  __int16 *v12; // rcx
  __int64 v13; // rdx
  __int16 v14; // ax
  __int16 v15; // ax

  v6 = -1073741668;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a1 + 308));
  *(_QWORD *)(a1 + 328) = v11;
  if ( v11 )
  {
    if ( !a3 )
      goto LABEL_19;
    v12 = (__int16 *)(a2 + 56);
    v13 = a3;
    do
    {
      v14 = *(v12 - 28);
      if ( v14 == 13 && *v12 == 71 )
        v10 = 1;
      if ( v14 == 9 )
      {
        v15 = *v12;
        if ( *v12 == 1 )
          v7 = 1;
        if ( v15 == 2 )
          v8 = 1;
        if ( v15 == 3 )
          v9 = 1;
      }
      v12 += 36;
      --v13;
    }
    while ( v13 );
    if ( !v10 )
      goto LABEL_19;
    if ( v7 )
    {
      if ( !v8 )
      {
        if ( v9 )
        {
LABEL_19:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xEu,
            (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids);
          return v6;
        }
        return 0;
      }
    }
    else if ( !v8 )
    {
      goto LABEL_19;
    }
    if ( !v9 )
      goto LABEL_19;
    return 0;
  }
  return v6;
}
