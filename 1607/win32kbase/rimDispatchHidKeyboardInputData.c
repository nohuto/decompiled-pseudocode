/*
 * XREFs of rimDispatchHidKeyboardInputData @ 0x1C00DED30
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00DF274 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C00DF59C (rimReportHidKeyboardInputData.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00D2FA8 (rimHidP_SetUsages.c)
 */

void __fastcall rimDispatchHidKeyboardInputData(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r12d
  int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  _WORD *v12; // r14
  unsigned int i; // edx
  unsigned int j; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r10d
  struct _HIDP_PREPARSED_DATA *v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h]

  if ( *(_DWORD *)(a3 + 164) )
  {
    v6 = 0;
    v7 = 0;
    memset(*(void **)(a3 + 440), 0, *(unsigned __int16 *)(*(_QWORD *)(a2 + 464) + 44LL));
    v8 = *(_DWORD *)(a3 + 248);
    if ( v8 )
    {
      if ( *(_DWORD *)(a3 + 292) )
      {
        v9 = 0;
        do
        {
          v10 = v9++;
          *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 292))++ + 252) = *(_WORD *)(a3 + 2 * v10 + 208);
        }
        while ( v9 < *(_DWORD *)(a3 + 248) );
      }
      else
      {
        memmove((void *)(a3 + 252), (const void *)(a3 + 208), 2LL * v8);
        *(_DWORD *)(a3 + 292) = *(_DWORD *)(a3 + 248);
      }
    }
    v11 = (unsigned int *)(a3 + 336);
    if ( *(_DWORD *)(a3 + 336) && *(_DWORD *)(a3 + 292) )
    {
      v12 = (_WORD *)(a3 + 168);
      memset((void *)(a3 + 168), 0, 0x28uLL);
      memmove((void *)(a3 + 168), (const void *)(a3 + 252), 2LL * *(unsigned int *)(a3 + 292));
      for ( i = 0; i < *v11; ++i )
      {
        for ( j = 0; j < *(_DWORD *)(a3 + 292); ++j )
        {
          if ( *(_WORD *)(a3 + 2LL * j + 168) == *(_WORD *)(a3 + 2LL * i + 296) )
            *(_WORD *)(a3 + 2LL * j + 168) = 0;
        }
      }
      *(_DWORD *)(a3 + 292) = 0;
      v15 = 20LL;
      do
      {
        if ( *v12 )
          *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 292))++ + 252) = *v12;
        ++v12;
        --v15;
      }
      while ( v15 );
    }
    if ( *(_DWORD *)(a3 + 292) )
    {
      v6 = rimHidP_SetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)(a3 + 252),
             (unsigned int *)(a3 + 292),
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL),
             *(char **)(a3 + 440),
             *(unsigned __int16 *)(*(_QWORD *)(a2 + 464) + 44LL));
      *(_DWORD *)(a3 + 248) = 0;
    }
    if ( *v11 )
    {
      v16 = *(_QWORD *)(a2 + 464);
      v17 = *(unsigned __int16 *)(v16 + 44);
      v18 = *(struct _HIDP_PREPARSED_DATA **)(v16 + 16);
      v7 = gpfnHidP_UnsetUsages
         ? gpfnHidP_UnsetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)(a3 + 296),
             (unsigned int *)(a3 + 336),
             v18,
             *(char **)(a3 + 440),
             v17)
         : -1073741637;
      *v11 = 0;
      if ( v7 == -1072627697 )
        v7 = 0;
    }
    if ( v6 >= 0 && v7 >= 0 )
    {
      v19 = *(_QWORD *)(a2 + 464);
      v20 = 0;
      v21 = *(unsigned __int16 *)(v19 + 44);
      *(_BYTE *)(a1 + 712) = 0;
      rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(a3 + 440), (__int64)&v20, 0);
    }
    *(_DWORD *)(a3 + 164) = 0;
  }
}
