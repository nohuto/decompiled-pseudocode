/*
 * XREFs of AuxKlibQueryModuleInformation @ 0x1C00CB000
 * Callers:
 *     FxpGetImageBase @ 0x1C0018350 (FxpGetImageBase.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 */

int __fastcall AuxKlibQueryModuleInformation(unsigned int *BufferSize, unsigned int QueryInfo, char *a3)
{
  unsigned int v5; // edi
  int result; // eax
  _AUX_PROCESS_MODULES *p_StaticInfo; // rbx
  ULONG i; // r8d
  NTSTATUS v9; // eax
  int v10; // esi
  unsigned int v11; // r8d
  char *v12; // rdx
  __int64 v13; // rcx
  _OWORD *v14; // rdx
  unsigned __int8 *FullPathName; // rax
  __int64 v16; // rcx
  unsigned int NeededSize; // [rsp+20h] [rbp-178h] BYREF
  _AUX_PROCESS_MODULES *ModuleInfo; // [rsp+28h] [rbp-170h]
  _AUX_PROCESS_MODULES StaticInfo; // [rsp+30h] [rbp-168h] BYREF

  if ( AuxpInitState != 1 )
    return -1073741823;
  v5 = 0;
  if ( AuxpKlibFns.QueryModuleInformationPtr )
  {
    return AuxpKlibFns.QueryModuleInformationPtr(BufferSize, 0x110u, a3);
  }
  else
  {
    result = 0;
    if ( ((unsigned __int8)a3 & 7) != 0 )
      result = -1073741583;
    if ( result >= 0 )
    {
      p_StaticInfo = &StaticInfo;
      for ( i = 304; ; i = NeededSize )
      {
        v9 = ZwQuerySystemInformation(SystemModuleInformation, p_StaticInfo, i, &NeededSize);
        v10 = v9;
        if ( v9 >= 0 )
          break;
        if ( v9 != -1073741820 )
          goto LABEL_24;
        if ( p_StaticInfo != &StaticInfo )
          ExFreePoolWithTag(p_StaticInfo, 0);
        p_StaticInfo = (_AUX_PROCESS_MODULES *)ExAllocatePoolWithQuotaTag(PagedPool, NeededSize, 0x4B787541u);
        ModuleInfo = p_StaticInfo;
        if ( !p_StaticInfo )
          return -1073741670;
      }
      if ( 272 * (unsigned __int64)p_StaticInfo->NumberOfModules <= 0xFFFFFFFF )
      {
        v11 = 272 * p_StaticInfo->NumberOfModules;
        if ( a3 )
        {
          if ( *BufferSize >= v11 )
          {
            while ( v5 < p_StaticInfo->NumberOfModules )
            {
              v12 = &a3[272 * v5];
              v13 = v5;
              *(_QWORD *)v12 = p_StaticInfo->Modules[v13].ImageBase;
              *((_DWORD *)v12 + 2) = p_StaticInfo->Modules[v13].ImageSize;
              *((_WORD *)v12 + 6) = p_StaticInfo->Modules[v13].OffsetToFileName;
              v14 = v12 + 14;
              FullPathName = p_StaticInfo->Modules[v13].FullPathName;
              v16 = 2LL;
              do
              {
                *v14 = *(_OWORD *)FullPathName;
                v14[1] = *((_OWORD *)FullPathName + 1);
                v14[2] = *((_OWORD *)FullPathName + 2);
                v14[3] = *((_OWORD *)FullPathName + 3);
                v14[4] = *((_OWORD *)FullPathName + 4);
                v14[5] = *((_OWORD *)FullPathName + 5);
                v14[6] = *((_OWORD *)FullPathName + 6);
                v14 += 8;
                *(v14 - 1) = *((_OWORD *)FullPathName + 7);
                FullPathName += 128;
                --v16;
              }
              while ( v16 );
              ++v5;
            }
          }
          else
          {
            v10 = -1073741789;
          }
        }
        *BufferSize = v11;
      }
      else
      {
        v10 = -1073741675;
      }
LABEL_24:
      if ( p_StaticInfo != &StaticInfo )
        ExFreePoolWithTag(p_StaticInfo, 0);
      return v10;
    }
  }
  return result;
}
