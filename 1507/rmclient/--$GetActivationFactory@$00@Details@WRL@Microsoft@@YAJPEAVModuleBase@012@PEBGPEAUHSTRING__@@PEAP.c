/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180003170
 * Callers:
 *     DllGetActivationFactory @ 0x1800028A0 (DllGetActivationFactory.c)
 * Callees:
 *     ?InternalGetRuntimeClassName@CAppMemoryReport@System@Windows@@SAPEBGXZ @ 0x180003320 (-InternalGetRuntimeClassName@CAppMemoryReport@System@Windows@@SAPEBGXZ.c)
 *     ?InternalGetRuntimeClassNameStatic@CMemoryManager@System@Windows@@SAPEBGXZ @ 0x180003330 (-InternalGetRuntimeClassNameStatic@CMemoryManager@System@Windows@@SAPEBGXZ.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180003340 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003610 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetMidEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003620 (-GetMidEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        HSTRING a3,
        const struct Microsoft::WRL::Details::CreatorMap *a4)
{
  PCWSTR StringRawBuffer; // rbp
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v8)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  const struct Microsoft::WRL::Details::CreatorMap **MidEntryPointer; // rax
  const struct _GUID **v10; // rdi
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  const struct Microsoft::WRL::Details::CreatorMap **LastEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **v13; // r14
  const struct _GUID *v14; // rax
  const unsigned __int16 *(*v15)(void); // rbx
  const unsigned __int16 *RuntimeClassNameStatic; // rax
  const unsigned __int16 *v17; // r8
  unsigned __int16 *v18; // rax
  signed __int64 v19; // r8
  int v20; // ecx
  int v21; // edx
  const struct _GUID *v22; // r9
  struct IUnknown **v24; // [rsp+28h] [rbp-80h]
  int v25; // [rsp+30h] [rbp-78h] BYREF
  BOOL hasEmbedNull; // [rsp+34h] [rbp-74h] BYREF
  _OWORD v27[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v28; // [rsp+58h] [rbp-50h]

  *(_QWORD *)a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v27[0] = *(_OWORD *)L"pActivatibleClassId";
    v28 = *(_QWORD *)L"sId";
    v27[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v27);
    return 2147942487LL;
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v8 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 40LL);
    if ( v8 == Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer )
      MidEntryPointer = Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer(this);
    else
      MidEntryPointer = v8(this);
    v10 = (const struct _GUID **)(MidEntryPointer + 1);
    v11 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 48LL);
    if ( v11 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
      LastEntryPointer = Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer(this);
    else
      LastEntryPointer = v11(this);
    v13 = LastEntryPointer;
    if ( v10 >= (const struct _GUID **)LastEntryPointer )
    {
LABEL_24:
      RoOriginateError(2147746065LL, 0LL);
      return 2147746065LL;
    }
    else
    {
      while ( 1 )
      {
        v14 = *v10;
        if ( *v10 )
        {
          v15 = *(const unsigned __int16 *(**)(void))v14->Data4;
          if ( v15 == Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic )
            RuntimeClassNameStatic = Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic();
          else
            RuntimeClassNameStatic = v15 == Windows::System::CAppMemoryReport::InternalGetRuntimeClassName
                                   ? Windows::System::CAppMemoryReport::InternalGetRuntimeClassName()
                                   : (const unsigned __int16 *)((__int64 (__fastcall *)(_QWORD))v15)(*(_QWORD *)v14->Data4);
          v17 = RuntimeClassNameStatic;
          v18 = (unsigned __int16 *)StringRawBuffer;
          v19 = (char *)v17 - (char *)StringRawBuffer;
          do
          {
            v20 = *(unsigned __int16 *)((char *)v18 + v19);
            v21 = *v18 - v20;
            if ( v21 )
              break;
            ++v18;
          }
          while ( v20 );
          if ( !v21 )
            break;
        }
        if ( ++v10 >= (const struct _GUID **)v13 )
          goto LABEL_24;
      }
      v22 = *v10;
      v25 = 1;
      return Microsoft::WRL::Details::GetCacheEntry(
               this,
               (struct Microsoft::WRL::Details::ModuleBase *)&v25,
               &GUID_00000035_0000_0000_c000_000000000046.Data1,
               v22,
               a4,
               v24);
    }
  }
}
