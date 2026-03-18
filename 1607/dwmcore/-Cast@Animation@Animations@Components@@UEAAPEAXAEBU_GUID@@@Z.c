/*
 * XREFs of ?Cast@Animation@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z @ 0x180192440
 * Callers:
 *     ?Cast@Animation@Animations@Components@@W7EAAPEAXAEBU_GUID@@@Z @ 0x1800C2950 (-Cast@Animation@Animations@Components@@W7EAAPEAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Cast@Object@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z @ 0x180194640 (-Cast@Object@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z.c)
 */

char *__fastcall Components::Animations::Animation::Cast(
        Components::Animations::Animation *this,
        const struct _GUID *a2)
{
  __int64 v3; // r8
  char *result; // rax
  __int64 v5; // rdx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5e5e2fd0_c787_438e_8bb2_940bfb035471.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5e5e2fd0_c787_438e_8bb2_940bfb035471.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5e5e2fd0_c787_438e_8bb2_940bfb035471.Data4;
  result = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_57fc0194_581c_43ca_b4f5_a38a5ab0de11.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_57fc0194_581c_43ca_b4f5_a38a5ab0de11.Data4;
    if ( v5 )
      return (char *)Components::Animations::Object::Cast(this, a2);
  }
  if ( this )
    return (char *)this + 8;
  return result;
}
