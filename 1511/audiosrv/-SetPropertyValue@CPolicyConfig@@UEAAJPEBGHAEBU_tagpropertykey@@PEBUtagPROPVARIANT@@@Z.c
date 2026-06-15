/*
 * XREFs of ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180085DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180085CF8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::SetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        const struct tagPROPVARIANT *a5)
{
  struct IMMDevice *v5; // rbx
  int v8; // esi
  struct IMMDevice *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  if ( a2 && a5 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                          + 40LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           a2,
           &v10);
    if ( v8 >= 0 )
    {
      v8 = CPolicyConfig::SetPropertyStoreProperty((struct IUnknown *)v10, a3, a4, a5);
      if ( v8 >= 0 )
        goto LABEL_11;
    }
    v5 = v10;
  }
  else
  {
    v8 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Fu, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v8);
LABEL_11:
    v5 = v10;
  }
  if ( v5 )
    ((void (__fastcall *)(struct IMMDevice *))v5->lpVtbl->Release)(v5);
  return (unsigned int)v8;
}
