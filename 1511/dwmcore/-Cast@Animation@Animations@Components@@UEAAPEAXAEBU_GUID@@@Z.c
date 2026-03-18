/*
 * XREFs of ?Cast@Animation@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z @ 0x180161D80
 * Callers:
 *     ?Cast@Animation@Animations@Components@@W7EAAPEAXAEBU_GUID@@@Z @ 0x1800BF550 (-Cast@Animation@Animations@Components@@W7EAAPEAXAEBU_GUID@@@Z.c)
 *     ?Cast@Animation@Animations@Components@@WBA@EAAPEAXAEBU_GUID@@@Z @ 0x1800BF560 (-Cast@Animation@Animations@Components@@WBA@EAAPEAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Cast@Object@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z @ 0x180163760 (-Cast@Object@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z.c)
 */

char *__fastcall Components::Animations::Animation::Cast(
        Components::Animations::Animation *this,
        const struct _GUID *a2)
{
  __int64 v2; // r8
  char *result; // rax
  __int64 v4; // r8
  __int64 v5; // r8

  v2 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5e5e2fd0_c787_438e_8bb2_940bfb035471.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5e5e2fd0_c787_438e_8bb2_940bfb035471.Data1 )
    v2 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5e5e2fd0_c787_438e_8bb2_940bfb035471.Data4;
  result = 0LL;
  if ( !v2 )
    goto LABEL_4;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_57fc0194_581c_43ca_b4f5_a38a5ab0de11.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_57fc0194_581c_43ca_b4f5_a38a5ab0de11.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_57fc0194_581c_43ca_b4f5_a38a5ab0de11.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e927e19f_bbb0_4b34_b84c_91bdabdb14d8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e927e19f_bbb0_4b34_b84c_91bdabdb14d8.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e927e19f_bbb0_4b34_b84c_91bdabdb14d8.Data4;
    if ( v5 )
    {
      return (char *)Components::Animations::Object::Cast(this, a2);
    }
    else if ( this )
    {
      return (char *)this + 16;
    }
  }
  else
  {
LABEL_4:
    if ( this )
      return (char *)this + 8;
  }
  return result;
}
